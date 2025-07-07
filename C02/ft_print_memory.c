#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_print_hex(unsigned char c)
{
	char *hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_addr(unsigned long addr)
{
	int		i;
	char	addr_chars[16];
	
	i = 0;
	while (i < 16)
	{
		addr_chars[15 - i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i++;
	}
	write(1, addr_chars, 16);
	ft_putchar(':');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*ptr;
	char		chars[17];

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_addr((unsigned long)&ptr[i]);
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
			{
				ft_print_hex(ptr[i + j]);
				chars[j] = ft_is_printable(ptr[i + j]) ? ptr[i + j] : '.';
			}
			else
			{
				write(1, "  ", 2);
				chars[j] = ' ';
			}
			if (j % 2)
				ft_putchar(' ');
			j++;
		}
		chars[j < 16 ? j : 16] = '\0';
		write(1, chars, 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
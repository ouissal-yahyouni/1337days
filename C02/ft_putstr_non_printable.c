#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	char *hex = "0123456789abcdef";

	ft_putchar('\\');                // affiche le backslash
	ft_putchar(hex[c / 16]);         // chiffre hexadécimal de gauche
	ft_putchar(hex[c % 16]);         // chiffre hexadécimal de droite
}

void	ft_putstr_non_printable(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);      // caractère imprimable → on l'affiche
		else
			print_hex((unsigned char)str[i]);  // non imprimable → affiché en \xy
		i++;
	}
}


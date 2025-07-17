#include<unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')   
        write(1, &str[i++], 1);
       
    write(1, "\n", 1);
}

int ft_strcmp(char *str1, char *str2)
{
    int i;
    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i])  
        i++;
    return (str1[i] - str2[i]);  // Retourne la différence ASCII
}

void ft_sort_param(int argc , char **argv){
      char *tmp;
      int i ;
      i = 1;
     	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_param(argc, argv);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}

//  $>./a.out test3 test2 test1 | cat -e
//test1$
//test2$
//test3$  

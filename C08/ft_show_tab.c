

#include <unistd.h>
#include "ft_stock_str.h"
void ft_putchar(char c){
    write(1,&c,1);

}

void ft_putstr(char *str ){

	while(*str){
	    write(1,str++,1);
	}

}
void ft_putnbr(int nb){
	unsigned int 	n;
	n = nb ;
	if (nb < 0){
	   ft_putchar('-');

	   n *=-1;
	
	}if (n < 10){
	   ft_putchar(n + '0');
	
	}else{
		ft_putnbr(n\10);
		ft_ putnbr(n % 10);
	
	}
void ft_show_tab(struct s_stock_str *par){
         int i ;
	 i = 0;
	 while(par[i].str){
	    ft_putstr(par[i].str);
	    ft_putchar('\n);
            ft_putnbt(par[i].size);
 	    ft_putchar('\n');
	    ft_putstr(par[i].copy);
	    ft_putchar('\n');
	    i++;
	 
	 
	 }


    
}

}

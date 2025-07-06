#include<unistd.h>

void ft_print_comb2(void){
    char i,j,k,f;
    i= '0';
    while(i <= '9'){
        j = '0';
        while (j <= '9'){
            k='0';
            while(k <= '9'){
            f=j+1;
           while(f <= '9'){
            write(1,&i,1);
            write(1,&j,1);
            write(1," ",1);
            write(1,&k,1);
            write(1,&f,1);
            write(1,", ",2);
           f++;
 
        }
        k++;
        }
         j++;
        }
       
       
     i++;   
    }
   
}

int main (void){
    ft_print_comb2();
    return 0;
}
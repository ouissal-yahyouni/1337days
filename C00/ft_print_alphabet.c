#include<unistd.h>

int ft_print_alphabet(void){
char letter='a';
    while(letter <= 'z'){
        write(1, &letter, 1); 
        letter++;
       
    }
}

int main (void){
    ft_print_alphabet();
}
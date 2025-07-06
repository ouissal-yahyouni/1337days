#include<unistd.h>

int ft_print_revers_alphabet(void){
    char letter='z';
    while( letter >= 'a'){
       letter--;
    }
    return 0;
}
int main (void){
    ft_print_revers_alphabet();
}
#include<unistd.h>

int ft_print_number(void){
    char number = '0';
    while (number <= '9'){
        
        write(1,&number,1);
        number++;
    }

}
int main(void){
    ft_print_number();
}
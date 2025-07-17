#include <unistd.h>

void ft_putchar(char *str){
    int i;
    i = 0;
    while(str[i]!='\0'){
        write(1,str[i++], 1);

    }
    write(1, "\n", 1);
}

int main(int argc , char **argv){
   
    while( argc >1)
        ft_putchar(argv[argc-1]);
        argc--;
     return (0);  
}
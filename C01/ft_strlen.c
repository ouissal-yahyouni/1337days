#include <unistd.h>
#include<stdio.h>

int ft_strlen(char *str){
  int ln = 0;
  while(str[ln] !='\0'){
    ln++;
  }
  return ln ;

};
int main (void){
    printf ("%d",ft_strlen("Hello World"));
    return 0;
}

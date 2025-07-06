#include<unistd.h>
void ft_is_negative(int n){
    char check='N';
    if (n<0){
        write(1,&check,1);
    }else{
        check='P';
         write(1,&check,1);

    }


}
int main (){
     ft_is_negative(-1);
      ft_is_negative(0);
       ft_is_negative(1);
       return 0;
}
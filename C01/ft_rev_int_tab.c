#include<unistd.h>
void ft_rev_int_tab(int *tab ,int size){
    int rev[size];
    int i =size;
    index=0;
    while(i>0 ){
       rev[index]=tab[i-1];
       index++;
       i--;
    }
    index=0;
     while(index < size ){
       tab[index]=rev[index];
       index++;
    }
};


#include<unistd.h>
void ft_sort_int_tab(int *tab ,int size){
  int i;
  int swap;
  while(size>=0){
    i=0;
    while(i<size-1){
        if (tab[i] > tab[i+1]){
            swap = tab[i];
            tap[i]= tab[i+1];
            tab[i+1]=swap;
        }
        i++;
    }
    size++;
  }
}

// tab[7]={2,6,2,6,1,8}
//sup que 2 hiya li kber nthtoha f var=2 var n9arnohan m3a 6
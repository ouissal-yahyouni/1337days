#include <stdlib.h>
int *ft_range(int min, int max){
    int i ;
    int *range ;
   
    range = malloc(sizof(int)*(max - min ));
    if (min  >= max)
       return (NULL);
     
    while(min < max){
        range[i] = min;
        min++;
    }
    return (range);
}
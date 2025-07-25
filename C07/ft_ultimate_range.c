#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
    
    int i;
    int size ;
    i =0;
    size = min - max;
    if( min >= max){
        *range = NULL;
        return 0;
    }
    *range = malloc(sizeof(int) * size );

    while(min < max){
        (*range)[i]=min;
        min++;

    }
    return (size);

}
#include <stdlib.h>
char *ft_strdup(char *src){
    int i ;
    char *dup;
    i = 0;
    while(str[i])
        i++
    dup = malloc(sizeof(char)*i+1) ;
    
    if(!dup)
        return (NULL);
    i = 0;

    while(str[i]){
        dup[i]= str[i]
        i++;
    }
    dup[i] = '\0';
	return (dup);
}
char *ft_strcat(char *dest, char *src){
    int i , j ;
    i=0;
    while(dest[i] != '\0'){
        i++;
    }
    j=0;
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null-terminate the concatenated string
    return dest;
}
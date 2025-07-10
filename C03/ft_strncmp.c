int ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i ;
    while((s1[i] != '\0' || s2[i] != '\0' )&& i < n){
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]); // Return the difference if characters are not equal
        }
        i++;  
    }
}
char *ft_strupcase(char *str){
   
    
    int i = 0;
    while(str[i] != '\0'){
        str[i] = str[i] - 32;  // Convert lowercase to uppercase
        i++;
    }
    return str;
}

// ASKII code a = 97-32
// ASKII code A = 65

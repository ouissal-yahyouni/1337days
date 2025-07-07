char *ft_strlowcase(char *str){
   
    
    int i = 0;
    while(str[i] != '\0'){
        str[i] = str[i] + 32;  // Convert uppercase to lowercase 
        i++;
    }
    return str;
}

// ASKII code a = 97
// ASKII code A = 65+32
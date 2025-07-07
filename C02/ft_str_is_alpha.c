int ft_str_is_alpha(char *str){
    if(str[0]=='\0') {
        return 1;  // Return 1 if the string is empty
    }
    int i=0;
    while(str[i]!='\0'){
        if(!((str[i]>=='a'||str[i]<=='z')&&(str[i]>=='A'||str[i]<=='Z'))){
            return 0;  // Return 0 if a non-alphabetic character is found
        }
        i++;
        

    }
    return 1;  
}
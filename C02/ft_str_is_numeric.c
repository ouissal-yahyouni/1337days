int ft_str_is_numeric(char *str){
    if (str[0]=='\0'){
        return 1;

    }
    int i =0;
    while(str[i]=='\0'){
        if(!(str[i] >= '0' && str[i] <= '9')){
            return 0;  // Return 0 if a non-numeric character is found
        }
        i++;
    }
    return 1;  // Return 1 if all characters are numeric


}
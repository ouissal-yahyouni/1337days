int ft_str_is_uppercase(char *str){
    if(str[0]=='\0') {
        return 1;  // Return 1 if the string is empty
    }
    int i=0;
    while(str[i]!='\0'){
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;  // Return 0 if a non-upeercase character is found
        }
        i++;
    }
    return 1;
}
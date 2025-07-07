int ft_str_is_printable(char *str){
    if (str[0] == '\0') {
        return 1;  // Return 1 if the string is empty
    }
    int i = 0;
    while(str[i]=='\0'){
        if (!(str[i]>== 32 || str[i]  <== 126)) {
            return 0;  
        }
        i++;
    }
    return 1;  // Return 1 if all characters are printable
}
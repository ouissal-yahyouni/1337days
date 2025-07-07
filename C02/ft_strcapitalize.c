char *ft_strcapitalize(char *str){
    int i =0;
    while(str[i] != '\0'){
        if(str[i]>=65 && str [i]<=90){
            str[i]=str[i]+32;
        }i++;

    }
    if(str[i]>=97 && str [i]<=122){
            str[i]=str[i]-32;
        }i =1;
    while(str[i] != '\0'){
        if (!( str[i-1]>=0 && str[i-1]<=9 )){
            if (!( str[i-1]>='A' && str[i-1]<='Z' )){
                if (!( str[i-1]>='a' && str[i-1]<='z' )){
                      if (!( str[i]>='a' && str[i]<='z' )){
                        str[i] = str[i] - 32; // Convert first letter of each word to uppercase
                      }

                }


            }
        }
    }
    return str;


}
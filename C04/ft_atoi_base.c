
int ft_check_base(char *str){
    int i ;
    int j;

    i=0;
    if (str[0]=='\0' || str[1]=='\0') {
        return 0; 
    }
    while(str[i]){
        if(str[i]== ' ' || str[i]== '\t' || str[i]=='+' || str[i]=='-' )
            return 0; 

            j=i+1;
            while(str[j]!='\0'){
                if (str[i] == str[j]) 
                    return 0; 

                j++;
            }i++;
        
    }
    return 1; 
}

int ft_base(char *str , char *base){
    int  nb;
    nb =0;
    while(base[nb] !='\0'){
        if (str == base[nb]){
            return nb; // Return the index of the character in the base
        }
    }return -1; // Return -1 if character not found in base
}

int  ft_spaces(char *str , int *ptr_i){

    int sign;
    int i;
    i=0;
    sign = 1; 
    while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r' ))
        i++;
    sign 1;
    while (str[i] == '+'||str[i]=='-'){
        if(str[i]=='-'){
            sign *= -1;
        }
        i++;
    }
    *ptr_i = i;
	return (sign);
}

int ft_atoi_base(char *str, char *base){
    int i;
    int sign;
    int nb;
    int nb2;
    int base_len;

    nb =0;
    i=0;

    base_len= ft_check_base(base);
    if (base_len >=2){
        sign =ft_spaces(str, &i);
        nb2 = ft_base(str[i], base);
        while(nb2 != -1){
            nb = (nb * base_len )  + nb2;
            i ++;
            nb2 = ft_base(str[i], base);
        }
        return (nb *= sign);
    }
    return 0; // Return 0 if base is invalid


   
}
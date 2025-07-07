unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    int lenght = 0;
    while (src[lenght] != '\0') {
        lenght++;
    }
    int i =0;
    if (size == 0) {
        return lenght; // If size is 0, return the length of src
    }while(i < size - 1 && src[i] != '\0') {
        dest[i] = src[i]; // Copy characters from src to dest
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
    return lenght; // Return the length of src

}
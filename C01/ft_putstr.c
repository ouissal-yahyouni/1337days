#include <unistd.h>

void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {           // Correction : '/0' → '\0'
        write(1, &str[i], 1);          // Correction : &str → &str[i]
        i++;
    };
};

// int main() {
//     ft_putstr("Hello World");
//     return 0;
// }

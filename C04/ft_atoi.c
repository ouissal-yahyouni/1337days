#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str){
    int i = 0;
    int result = 0;
    int sign = 1;

    // Ignorer les espaces
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r') {
        i++;
    }

    // Gérer le signe
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Lire les chiffres
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    printf("%d\n", ft_atoi("   4--345"));     // Résultat incorrect mais intentionnel pour test
    printf("%d\n", atoi("   4--345"));        // Comparaison avec atoi
    return 0;
}


int ft_is_prime(int nb){
    if(nb <= 1)
        return 0;  // 0 and 1 are not prime numbers
    int i =2;
    while(i < nb){
        if( nb % i == 0)
            return 0;  // Found a divisor, not prime
        i++;
    }
    return 1;  // No divisors found, it's prime

    
}
int ft_find_next_prime(int nb){
     while (!ft_is_prime(nb)) {
        nb++;
    }
    return nb;
}

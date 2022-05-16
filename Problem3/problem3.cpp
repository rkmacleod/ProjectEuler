//Problem #3: Largest prime factor
//Description: The prime factors of 13195 are 5, 7, 13 and 29.
//Output: What is the largest prime factor of the number 600851475143 ?

#include <iostream>

int main()
{
    const long long PRIME_NUM = 600851475143;       //Large number being factored
    long long temp = PRIME_NUM;                     //used for storing number being factored
    long long factor = 1;                           //used for factoring large number

    while(temp != 1)
    {
        factor++;
        if(temp % factor == 0)
            temp /= factor;
    }

    std::cout << factor << std::endl;
    return 0;
}
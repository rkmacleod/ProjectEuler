//Problem #7: 10001st prime
//Description: By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//Output: What is the 10 001st prime number?

#include <iostream>
#include <vector>

//Function Prototypes
bool checkPrime(int);


int main()
{
    const int PLACEMENT = 10001;
    int num = 1, i = 1;
    
    while(i < PLACEMENT + 1)
    {
        num++;
        if(checkPrime(num) == true)
            i++;
    }

    std::cout << num << std::endl;
}

bool checkPrime(int n)
{
    bool isPrime = true;                    //flag for checking if number is prime    
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}
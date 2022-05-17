//Problem #10: Summation of primes
//Description: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Output: Find the sum of all the primes below two million.

#include <iostream>
#include <iomanip>
#include <vector>

//Function Prototypes
bool checkPrime(int);
std::vector<int> primesList(int);

int main()
{
    int range = 2000000;
    double sum = 0;
    std::cout.precision(16);    //set precision so no scientific notation is used

    std::vector<int> primes = primesList(range);

    //std::cout << "List of primes below " << range << ":" << std::endl;

    for(int i = 0; i < primes.size(); i++)
    {
        //std::cout << primes[i] << std::endl;
        sum += primes[i];
    }

    std::cout << "There are " << primes.size() << " primes below " << range << std::endl;
    std::cout << "Sum of all primes below " << range << " is " << sum << std::endl;

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

std::vector<int> primesList(int range)
{
    std::vector<int> primeVec = {};         //vector for storing list of prime numbers 1-20
        

    for(int n = 2; n < range+1; n++)
    {
        if(checkPrime(n))                   //true if prime
            primeVec.push_back(n);          //add to vector of primes
    }

    return primeVec;
}
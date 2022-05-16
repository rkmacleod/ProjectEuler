//Problem #5: Smallest multiple
//Description: 2520 is the smallest number than can be divided by each of the numberes from 1 to 10 without any remainder
//Output: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
//Notes: 2520 = 3*4*5*6*7

#include <iostream>
#include <vector>

//Function Prototypes
bool checkPrime(int);
std::vector<int> primesList(int);
int Divisible(int, int);

int main()
{
    int range;
    int ans = 1;

    std::cout << "Enter range:\n";
    std::cin >> range;
    std::cout << "Calculating smallest positive number that is evenly divisible by all of the numbers from 1 to " << range << std::endl;

    std::vector<int> primes = primesList(range);

    for(int i = 0; i < primes.size(); i++)
    {
        ans *= primes[i];
    }

    int check = Divisible(ans, range);

    while(check != 1)
    {
        ans *= check;
        check = Divisible(ans, range);    //recheck with modified answer
    }

    std::cout << "The smallest positive number = " << ans << std::endl;

    return 0;

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

int Divisible(int n, int range)
{
    int notDivisible;
    bool divisible = true;

    for(int i = 2; i < range+1; i++)
    {
        if(n % i != 0)          //if there is a remainder
        {
            divisible = false;
            notDivisible = i;
            break;
        }
    }

    if(!divisible)
    {
        if(notDivisible % 2 == 0)
            return 2;
        else
            return 3;
    }
    else
        return 1;
}
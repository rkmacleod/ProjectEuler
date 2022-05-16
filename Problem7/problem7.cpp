//Problem #5: Smallest multiple
//Description: 2520 is the smallest number than can be divided by each of the numberes from 1 to 10 without any remainder
//Output: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
//Notes: 2520 = 3*4*5*6*7

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
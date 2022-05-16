#include <iostream>

int main()
{
    int n;
    int notDivisible;
    bool flag = true;

    do
    {
        std::cout << "Enter 1 to quit\nEnter number:\n";
        std::cin >> n;

        for(int i = 2; i < 21; i++)
        {
            if(n % i != 0)          //if there is a remainder
            {
                flag = false;
                notDivisible = i;
                break;
            }
        }

        if(flag)
            std::cout << "Number is divisible by all numbers from 1 to 20\n";
        else
            std::cout << "Number is NOT divisible by " << notDivisible << std::endl;
        flag = true;    //reset flag
    } while (n != 1);
}
//Problem #6: Sum square difference
//Description: Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640
//Output: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>

int main()
{
    const int RANGE = 100;
    int sums;
    double sumOfSquares, squareOfSums, diff;

    for(int i = 1; i < RANGE + 1; i++)
    {
        sumOfSquares += i*i;
        sums += i;
    }

    squareOfSums = pow(sums, 2);
    diff = squareOfSums - sumOfSquares;

    std::cout.precision(0);
    std::cout << "Sum of Squares = " << std::fixed << sumOfSquares << std::endl;
    std::cout << "Square of Sums = " << std::fixed << squareOfSums << std::endl;
    std::cout << "Difference = " << std::fixed << diff << std::endl;
}
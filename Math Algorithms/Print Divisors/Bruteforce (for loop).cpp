#include <iostream>
int input()
{
    std::cout << "Enter an Integer\n";
    int userInput{};
    std::cin >> userInput;
    return userInput;
}
void printOutput(int x )
{
    std::cout << x << " , " ;
}
void findDivisors()
{
    int userInput {input()} ;
    for (int i = 1 ; i <= userInput ; i++)
    {
        if (userInput % i == 0)
        {
            printOutput(i) ;
        }
    }
    }
    int main()
    {
        findDivisors () ;
        return 0 ;
    }

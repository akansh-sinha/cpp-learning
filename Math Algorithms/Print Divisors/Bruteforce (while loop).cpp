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
    int possibleDivisor = 1 ;
    while (possibleDivisor <= userInput)
    {
        if (userInput % possibleDivisor == 0)
        {
            printOutput(possibleDivisor) ;
        }
        possibleDivisor = possibleDivisor + 1 ;
        
    }
    }
    int main()
    {
        findDivisors () ;
        return 0 ;
    }

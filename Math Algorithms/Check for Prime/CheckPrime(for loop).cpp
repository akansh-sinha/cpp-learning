#include <iostream>
#include <cmath>
int input()
{
    std::cout << "Enter an Integer\n";
    int userInput{} ;
    std::cin >> userInput ;
    return userInput;
}
bool checkPrime(int userInput)
{
    if (userInput <= 1)
    {return false;}
   for(int i = 2 ; i<= std::sqrt(userInput) ; i++ )
   {
       if(userInput % i == 0)
       {return false ; }
   }
   return true ;
}
void printOutput (bool output)
{
    if (output == 0 )
    {std::cout << "Entered number is not prime\n";}
    else 
    std::cout << "Entered number is prime \n";
}
int main()
{
    int userInput{input()};
    int output {checkPrime(userInput)};
    printOutput(output);
    return 0;
}

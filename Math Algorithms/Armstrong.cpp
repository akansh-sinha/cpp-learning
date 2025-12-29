#include <iostream>
#include <cmath>
// take input from user and return it
int input()
{
    std::cout << "Enter an integer\n";
    int userInput{};
    std::cin >> userInput;
    return userInput;
}
// count the number of digits in input
int checkDigits(int userInput)
{
    int numOfDigits = 0 ;
    while (userInput > 0)
    {
        numOfDigits = numOfDigits + 1 ;
        userInput = userInput / 10 ;
    }
    return numOfDigits ;
}
// find valur of sum of digits raised to the number of digits
int findArmstrong (int numOfDigits , int userInput)
{
    int armstrongVal = 0 ;
    while (userInput > 0)
    {
        armstrongVal = armstrongVal + pow(userInput%10 , numOfDigits) ;
        userInput = userInput/10 ;
    }
    return armstrongVal ;
}
void checkArmstrong (int armstrongVal , int orgVal)
{
    
    if (armstrongVal == orgVal)
    {
        std::cout << "true\n" ;
    }
    else 
    std::cout << "false\n" ;
}
int main()
{
    int userInput {input()} ;
    int numOfDigits {checkDigits(userInput)} ;
    int armstrongVal {findArmstrong(numOfDigits , userInput)} ;
    checkArmstrong(armstrongVal , userInput) ;
    return 0 ;
}

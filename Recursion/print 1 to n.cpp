#include <iostream>
int input()
{
    std::cout << "Enter an Integer\n";
    int userInput{};
    std::cin >> userInput;
    return userInput ;
}
void printOutput( int n)
{
  if (n<0)
  n = -n ;
  if (n==0)
  return;
  printOutput(n-1);
  std::cout << n << "\n";
  
}
int main()
{
    int userInput{input()};
    printOutput(userInput);
    return 0;
}
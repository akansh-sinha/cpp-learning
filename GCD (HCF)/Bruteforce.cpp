#include <iostream>
#include <algorithm>
#include <cmath>
int gcd()
{
    int x{} ;
    int y{} ;
    std::cin >> x >> y ;
    int min {std::min(x,y)};
    int max {std::max(x,y)};
    
    int currentGcd = min ;
    while(currentGcd > 0)
    {
      if (  max%currentGcd == 0 && min%currentGcd ==0)
      return currentGcd ;
      else 
      currentGcd = currentGcd - 1 ;
    }
    return currentGcd;
}
int main()
{
    std::cout << "enter two integers\n";
    int output {gcd()};
    std::cout << output;
    return 0;
}
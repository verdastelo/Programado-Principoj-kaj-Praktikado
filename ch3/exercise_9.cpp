#include <iostream> 
#include <string> 

int main() 
{
    std::string number = " "; 
    std::cout << "Spell out out a number between one and four: " ; 
    std::cin >> number; 
    if (number == "zero") std::cout << 0 << '\n'; 
    else if (number == "one") std::cout << 1 << '\n'; 
    else if (number == "two") std::cout << 2 << '\n'; 
    else if (number == "three") std::cout << 3 << '\n'; 
    else if (number == "four") std::cout << 4 << '\n'; 
    else  {
        std::cout << "Please enter a number between one and four. "; 
        std::cout << "All other inputs will be rejected.\n" ;
        }
    return 0;
} 

#include <iostream> 
#include <string> 

int main()
{
    float pennies, nickels, dimes, quarters, halfDollars, dollars; 
    float value; 
    
    std::cout << "How many pennies do you have? "; 
    std::cin >> pennies; 
    if (pennies == 1) std::cout << "You have a penny .\n"; 
    else std::cout << "You have " << pennies << " pennies.\n"; 
    
    std::cout << "How many nickels do you have? "; 
    std::cin >> nickels; 
    if (nickels == 1) std::cout << "You have a nickel .\n"; 
    else std::cout << "You have " << nickels << " nickel.\n";
    
    std::cout << "How many dimes do you have? "; 
    std::cin >> dimes; 
    if (dimes == 1) std::cout << "You have a dime .\n"; 
    else std::cout << "You have " << dimes << " dimes.\n";
    
    std::cout << "How many quarters do you have? "; 
    std::cin >> quarters; 
    if (quarters == 1) std::cout << "You have a quarter .\n"; 
    else std::cout << "You have " << quarters << " quarters.\n";
    
    std::cout << "How many half dollars do you have? "; 
    std::cin >> halfDollars; 
    if (halfDollars == 1) std::cout << "You have a half dollar .\n"; 
    else std::cout << "You have " << halfDollars << " half dollars.\n";
    
    std::cout << "How many dollars do you have? "; 
    std::cin >> dollars; 
    if (dollars == 1) std::cout << "You have a dollar .\n"; 
    else std::cout << "You have " << dollars << " dollarss.\n";
    
    value = (pennies/100) + 
            (nickels/20) + 
            (dimes/10) + 
            (quarters/4) +
            (halfDollars/2) + 
            (dollars); 
    
    std::cout << "You have $" << value << std::endl;
    
    return 0;
}

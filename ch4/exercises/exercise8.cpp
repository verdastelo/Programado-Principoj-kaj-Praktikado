/*
    A king rewards the inventor of chess.
*/

#include <iostream>
#include <cmath>
#include <vector>  

using namespace std; 

int main()
{
    int square = 1; // There can't be a zero square. 
    double rice_grain = 1; // The inventor asks for at least one grain. 
    cout << "square " << '\t' << "rice grains" << '\n'; 
    for (int i = 1; i <= 64; i++) {
        cout << square << '\t' << rice_grain << '\n';
        rice_grain = rice_grain * 2; 
        square++;
        
        if ((rice_grain > 1000) && (rice_grain < 2000)) {
            cout << "The inventor will have a 1000 grains of "
                 << "rice on square " << square << endl; 
                 }     
        if ((rice_grain > 1000000) && (rice_grain < 2000000)) {
            cout << "The inventor will have a 1000000 grains of "
                 << "rice on square " << square << endl; 
                 }
              
        if ((rice_grain > 1000000000) && (rice_grain < 2000000000)) {
            cout << "The inventor will have a 1000000000 grains of "
                 << "rice on square " << square << endl; 
                 }
        } 
        
    return 0; 
} 

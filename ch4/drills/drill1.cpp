#include <iostream> 
#include <vector> 

using namespace std; 

int main()
{
    vector <int> twoNumbers; 
    int i; 
    while (cin >> i) {
        twoNumbers.push_back(i);
        if (twoNumbers.size() == 2) {
            cout << twoNumbers[0] << " and " << twoNumbers[1] << '\n';
        }
    }
    return 0;
} 
        

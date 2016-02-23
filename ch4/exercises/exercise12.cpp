#include <iostream> 
#include <cmath> 
#include <vector> 
#include <algorithm> 

// divide n by all numbers less than n
// store the modulus in a vector
// sort the vector 
// if modulus is zero for the first number, n is not a prime
// if it not, n is a prime 

using namespace std; 

int finds_a_prime(int n)
{
    vector <int> primes; 
    
    primes.push_back(2);

    vector <double> check_primes; 
    
    double prime_store; 
    
    if ((n % 2) == 0) {
        // do nothing;
        }
    else 
        {
        for (int i = 0; i < primes.size(); i++) {
            prime_store = (n % primes[i]); 
            check_primes.push_back (prime_store); 
            } 
            
        sort (check_primes.begin(), check_primes.end());
        
        
        if (check_primes[0] == 0) {
            // do nothing;
            }
        }
        
        primes.push_back(n);
        
        for (int j = 0; j < primes.size(); j++) {
            cout << primes[j] << ' ';
        }
} 

int main()
{
    cout << "Find prime numbers up to: ";
    int n; 
    cin >> n;
    
    for (int i = 2; i < n; i++) {
        finds_a_prime(i);
        }
    cout << '\n'; 
    return 0;
} 

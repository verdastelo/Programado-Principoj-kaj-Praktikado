/*
    Each input is a distance between two cities. 
    Compute the sum of all distances. 
    Also find and print the smallest and greatest distance between 
    two cities. 
    Don't forget to find and print the mean distance between two
    randomly chosen cities.
*/

#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

int main()
{
    cout << "Enter distances: \n"; 
    vector <double> distances; // stores distance values  
    double dist; 
    while (cin >> dist) // read distance 
        distances.push_back(dist); 
        
    sort (distances.begin(), distances.end()); 
    
    // compute the sum of all distances
    double sum; 
    for (int i = 0; i < distances.size(); i++) {
        sum += distances[i]; 
        }
        
    cout << "The sum of all distances is " << sum << '\n'; 
    
    // print smallest and largest distance valuest
    
    cout << "The shortest distance between two cities is: "
         << distances[0] << endl; 
         
    cout << "The largest distance between two cities is: " 
         << distances[distances.size()-1] << endl; 
         
    // print mean distance between two random cities
    
    cout << "The mean distance is " << sum/distances.size() << endl; 
    
    return 0;
} 

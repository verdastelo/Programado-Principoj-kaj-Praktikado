#include <iostream> 

int main()
{
    // Prompt a user to enter three integers. 
    std::cout << "Enter three numbers: " << std::endl; 
    
    // Create three memory spaces to store three integers. 
    int val1, val2, val3;
    
    // Let the user input three integers and store them.  
    std::cin >> val1 >> val2 >> val3; 
    
    /* 
    There are 3! (factorial) ways to arrange the values in
    increasing or decreasing order.
    */ 
    
    /*
    Create three more memory spaces to store integers and label
    them: small, middle and large. 
    */ 
    int small, middle, large; 
    
    // Compare val1 with val2. 
    // First assume that val1 is less than or equal to val2. 
    if (val1 <= val2) {
        // Two cases follow if our assumption is correct. 
        // Case 1: val2 is less than or equal val3. 
        if (val2 <= val3) {
            // In this case: 
            small = val1; 
            middle = val2; 
            large = val2; 
            std::cout << small << ',' << middle << ',' << large << std::endl;             
            } 
            
        // Case 2: val3 is less than or equal to val2. 
        if (val3 <= val2) {
            // In this case, compare val3 to val1. 
            if (val1 <= val3) {
                small = val1; 
                middle = val3; 
                large = val2; 
                std::cout << small << ',' << middle << ',' << large << std::endl;   
                } 
            else {
                small = val3; 
                middle = val1; 
                large = val2; 
                std::cout << small << ',' << middle << ',' << large << std::endl;   
                } 
            } 
        } 
     
    // Now we assume that val2 is less than val1. 
    if (val2 < val1) {
        // Two cases follow if our assumption is correct. 
        // Case 1: val1 is less than or equal val3. 
        if (val1 <= val3) {
            // In this case: 
            small = val2; 
            middle = val1; 
            large = val3;   
            std::cout << small << ',' << middle << ',' << large << std::endl;            
            } 
            
        // Case 2: val3 is less than or equal to val1. 
        if (val3 <= val1) {
            // In this case, compare val3 to val2. 
            if (val2 <= val3) {
                small = val2; 
                middle = val3; 
                large = val1; 
                std::cout << small << ',' << middle << ',' << large << std::endl;   
                } 
            else {
                small = val3; 
                middle = val2; 
                large = val1; 
                std::cout << small << ',' << middle << ',' << large << std::endl;   
                } 
            } 
        } 
    return 0; 
} 
     

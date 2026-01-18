#include <iostream>
using namespace std;

// Simple function definition
void printN(int N) {

    if(N==0) return;

    printN(N-1);
    cout<<N << endl;
    
   
}

// Main function
int main() {

    cout <<" \n\n\n";
    // Function call
    
    
    printN(10);
    


    cout <<" \n\n\n";
    return 0;
}
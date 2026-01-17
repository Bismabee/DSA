#include <iostream>
using namespace std;

// Simple function definition
int fibonacii(int previous, int next, int N) {
    
    
    if(N ==0) return 0;
    if(N==1) return 1;


    cout<<" \n" << next;

    int r = fibonacii(next, next+previous, N-1 );


    return r+previous;

}

// Main function
int main() {
    // Function call
    int result = fibonacii(0,1,5);
    
    cout << "\n\nResult: " << result << endl;
    
    return 0;
}
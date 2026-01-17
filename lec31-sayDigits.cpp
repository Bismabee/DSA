#include <iostream>
using namespace std;

string sayDigitsAsString(int x) {
    switch (x) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "invalid";
    }
}


// Simple function definition
void sayDigits(int x){
    

    cout <<" \n\n\n";

    if(x ==0) return;


    sayDigits(x/10);
    cout<<sayDigitsAsString(x%10) <<" ";

   

}

// Main function
int main() {

    cout <<" \n\n\n\n\n";
    sayDigits(412);


    cout <<" \n\n\n";
    return 0;
}
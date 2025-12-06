#include <iostream>
using namespace std;

int main(){
    int num;
    //asking for user input
    cout << "Enter a number to calculate its factorial : ";
    cin >> num;
    //calculating factorial
    unsigned int factorial{num};
    for(int i{num-1};i > 1;i--){
        factorial = factorial*i;
    }
    //final output
    cout << "The factorial of " << num << " is " << factorial << endl;
    
    main();
    return 0;
}
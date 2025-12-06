#include <iostream>
using namespace std;

int main(){
    int dividend, divisor, quotient, remainder;
    // enter fraction
    while(true){
        cout << "Enter the dividend(0 to quit): ";
        cin >> dividend;
        if(!dividend) return 0;
        cout << "Enter the divisor(must not equal 0): ";
        cin >> divisor;
        if(divisor) break;
        else cout << "The divisor must not equal 0!\n";
    }
    // calculations
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    // final output
    cout << quotient;
    if(remainder) cout << " and " << remainder << "/" << divisor ;
    cout << endl;

    main();
    return 0;
}
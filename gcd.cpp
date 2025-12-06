#include <iostream>
using namespace std;

int main(){
    int a{0},b{0},q{0},r{0},gcd{0};
    //enter two non zero numbers
    while(true){
        cout << "enter divident: ";
        cin >> a;
        cout << "enter divisor: ";
        cin >> b;
        cout << endl;
        if(a && b) break;
        else cout << "None of the two numbers should be zero!\n";
    }
    // calculations
    q = a/b;
    r = a%b;
    cout << a << "    " << b << "    " << q << "    " << r << endl;
    if (r == 0) gcd = b;
    else {
        while(r != 0){
            gcd = r;
            a = b;
            b = r;
            q = a/b;
            r = a%b;
            cout << a << "    " << b << "    " << q << "    " << r << endl;
        }
    }
    //final output
    if(gcd == 1) cout << "these two numbers are coprime.\n";
    else cout << "The gcd is: " << gcd << endl;
    
    main();
    return 0;
}


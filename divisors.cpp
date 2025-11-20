#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Divisors of " << num << " ={";
    for(int i{1},quotient{num};i<quotient;i++){
        if(num%i != 0) continue;
        else{
            quotient = num/i;
            cout << quotient << ", " << i << ", ";
        }
    }
    cout << "}\n";
    main();
    return 0;
}

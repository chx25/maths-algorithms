#include <iostream>
using namespace std;
int main(){
    int num,quotient;
    cout << "Enter number: ";
    cin >> num;
    cout << "Divisors of " << num << " ={";
    for(int i{1};i<quotient;i++){
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

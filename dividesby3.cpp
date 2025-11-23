#include <iostream>
using namespace std;

int main(){
    int number,sum{0};
    bool repeatLoop{false};
    cout << "Enter a number to see if its divisible by 3: ";
    cin >> number;
    
    
    
    do{
        int i{1};
        for(;!(number>=i && number<i*10);i = i*10);//finding highest power of ten
        
        while(i > 0){
            repeatLoop = false;
            sum += number/i;
            number = number%i;
            i = i/10;
        }
        cout << sum << endl;
        if(sum > 10){
            number = sum;
            sum = 0;
            repeatLoop = true;
        }
    }while(repeatLoop);
    
    if(sum == 3 || sum == 6 || sum == 9){
        cout << "its divisible by 3" << endl; 
    }
    main();
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> pascalsGenerator(int power){
    vector<int> tempRow1={1,1},tempRow2={1,1};//both initialized to the 1st row
    for(int i{1};i<=power;i++){//iterate over rows till needed power is reached
        for(int j{0};j<tempRow1.size()-1;j++){//iterate over each number of the row but not the last
            
        }
    }
    return tempRow2;
}
int main(){
    
    return 0;
}
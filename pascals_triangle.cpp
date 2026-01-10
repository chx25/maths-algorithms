#include <iostream>
#include <vector>
using namespace std;

vector<int> pascalsGenerator(int power){
    vector<int> tempRow1={1,1},tempRow2={1,1};//both initialized to the 1st row
    for(int i{1};i<=power;i++){//iterate over rows till needed power is reached
        tempRow2.clear();//go to the next row
        tempRow2.push_back(1);//set the first number to 1
        for(int j{0};j<tempRow1.size()-1;j++){//add each number of the row to the one after it
            tempRow2.push_back(tempRow1[j]+tempRow1[j+1]);
        }
    }
    return tempRow2;
}
int main(){
    
    return 0;
}
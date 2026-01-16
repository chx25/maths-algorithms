#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> pascalsGenerator(int power,bool pastRows=false){
    vector<int> tempRow1={1,1},tempRow2={1,1};//both initialized to the 1st row
    for(int i{1};i<power;i++){//iterate over rows till needed power is reached
        tempRow2.clear();//go to the next row
        tempRow2.push_back(1);//set the first number to 1
        for(int j{0};j<tempRow1.size()-1;j++){//add each number of the row to the one after it
            tempRow2.push_back(tempRow1[j]+tempRow1[j+1]);
        }
        tempRow2.push_back(1);//add the last number as 1
        tempRow1 = tempRow2;
        if(pastRows){
            for(int num : tempRow2) cout<<num<<" ";
            cout<<endl;
        } 
    }
    return tempRow2;
}
int main(){
    int maxPower;
    string yesorno;
    
    cout << "what power do you wanna reach?: ";
    cin >>maxPower;
    cout<<"do you want to see all the columns?(anything other than yes will be considered no): ";
    cin>>yesorno;
    bool pastRows=(yesorno=="yes")?true:false;

    for(int num : pascalsGenerator(maxPower,pastRows)){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
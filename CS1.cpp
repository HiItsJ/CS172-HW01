//
//  CS1.cpp
//  
//
//  Created by Josiah on 9/13/16.
//
//

#include "CS1.hpp"
#include <iostream>

using namespace std;

void ex02();
int main(){
    srand(time(NULL));
    ex02();
}
void ex02(){
    
    bool hasPassedTest = true;
    int x = rand() % 100;
    int y = rand() % 100;
    
    if (x > y){
        cout<<"x is greater than y.\n";
    }
    if (x==y){
        cout<<"x is equal to y.\n";
    }
    
    int numberOfShares;
    cout<<"Enter a number: ";
    cin>>numberOfShares;
    if (numberOfShares < 100){
        cout<<numberOfShares<<" is less than 100.\n";
    }
    
    int input1;
    int input2;
    cout<<"Enter a box width: ";
    cin>>input1;
    cout<<"Enter a book width: ";
    cin>>input2;
}
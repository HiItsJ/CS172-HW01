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
        cout<<"x is greater than y.";
    }
    if (x==y){
        cout<<"x is equal to y.";
    }
}
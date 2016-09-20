//
//  CS1.cpp
//  
//
//  Created by Josiah on 9/13/16.
//
//

#include "CS1.hpp"
#include <iostream>
#include <math.h>

using namespace std;

void ex02();
void ex03();

int main(){
    srand(time(NULL));
    ex02();
    ex03();
}

void ex02(){
    
    bool hasPassedTest = true;
    int x = rand() % 100;
    int y = rand() % 100;
    
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<y<<"\n";
    
    if (x > y){
        cout<<"x is greater than y.\n";
    }
    else if (x==y){
        cout<<"x is equal to y.\n";
    }
    else if (x < y){
        cout<<"x is not greater than or equal to y.\n";
    }
    
    int numberOfShares;
    cout<<"Enter a number: ";
    cin>>numberOfShares;
    if (numberOfShares < 100){
        cout<<numberOfShares<<" is less than 100.\n";
    }
    else {
        cout<<numberOfShares<<" is not less than 100.\n";
    }
    
    int input1;
    int input2;
    cout<<"Enter a box width: ";
    cin>>input1;
    cout<<"Enter a book width: ";
    cin>>input2;
    if (input1 % input2 == 0){
        cout<<"The box width of "<<input1<<" is evenly divisible by the book width of "<<input2<<"\n";
    }
    else {
        cout<<"The box width of "<<input1<<" is not evenly divisible by the book width of "<<input2<<"\n";
    }
    int input3;
    int input4;
    cout<<"Enter the shelf life for a box of chocolate: ";
    cin>>input3;
    cout<<"Temperature outside: ";
    cin>>input4;
    if (input4 > 90){
        cout<<"The shelf life of the box of chocolate has been reduced to "<<input3-4<<" from "<<input3<<" because it is greater than 90 degrees outside";
    }
    else {
        cout<<"The shelf life of the box of chocolate remained at "<<input3<<" because it is not greater than 90 degrees outside.\n";
    }
}

void ex03(){
    int input5;
    double value1;
    cout<<"\nEnter the area of a square: ";
    cin>>input5;
    value1 = pow(input5+input5,0.5);
    cout<<"The length of the diagonal of the square with area "<<input5<<" is "<<value1;
    char input6;
    cout<<"\nIs Josiah super cool? Enter \"y\" for yes or \"n\" for no (HINT: The answer is yes): ";
    cin>>input6;
    if (input6=='y'){
        cout<<"You chose YES! Of course he is!";
    }
    if (input6=='n'){
        cout<<"You chose NO! You're wrong, but ok.";
    }
}








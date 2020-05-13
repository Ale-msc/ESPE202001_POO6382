//Librerias
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//Function prototype
float compute_of_the_addition(float number1, float number2);

//Main
int main (){
    float addition,number1,number2;
    cout<<"Welcome to the addition program."<<endl;
    cout<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>number1;
    cout<<"Enter the second number"<<endl;
    cin>>number2;    
    addition=compute_of_the_addition(number1, number2);
    cout<<"The result is: ";
    cout<<addition;
    getch();
    return 0;

}

//Function
float compute_of_the_addition(float number1, float number2){
    float addition;
    addition=(number1+number2);
    return addition;
}


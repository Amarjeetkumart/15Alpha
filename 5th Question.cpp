/*Enter two numbers from keyboard. Write a program to check if the two numbers are equal.
 */
#include <iostream>
using namespace std;
int main()
{   
    int num1,num2;
    cout<<"Enter the value of first number ";
    cin>>num1;
    cout<<"Enter the value of second number ";
    cin>>num2;
    if (num1==num2)
    cout<<"Number's are equal";
    else
    cout<<"Number's are not equal";
    return 0;

}
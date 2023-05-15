/*Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
 */
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number a ";
    cin>>a;
    cout<<"Enter number b ";
    cin>>b;
    if (a<50 & a<b)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}
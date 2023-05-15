/*Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-
If entered value of x is 5 and y is 10 then
cout <<x << " and " << y
should print 10 and 5.
*/
#include <iostream>
using namespace std;
int main()
{   
    int x,y,t;
    cout<<"enter the value of x ";
    cin>>x;
    cout<<"enter the value of y ";
    cin>>y;
    t=x;
    x=y;
    cout<<"Now the value of x after interchange with y is "<<y;
    cout << " and the value of y is " << t;
    return 0;
}
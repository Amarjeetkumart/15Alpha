/*Write a program to convert Fahrenheit into Celsius.*/
#include <iostream>
using namespace std;
int main()
{   int fehrenheit;
    cout<<"Enter the value of fehrenheit ";
    cin >> fehrenheit;
    float celsius= (fehrenheit -32)*0.5556;
    cout<<"the value in celsius is "<<celsius;
    return 0;
}
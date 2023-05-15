/*Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
 */
#include <iostream>
using namespace std;
int main()
{   
    int radius;
    cout<<"Enter the value of radius- ";
    cin>>radius;
    float perimeter = 2*3.14*radius;
    float area = 3.14*radius*radius;
    cout<<"Perimeter of circle is- "<<perimeter<<endl;
    cout<<"Area of circle is- "<<area<<endl;
}
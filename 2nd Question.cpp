/*Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.
 */
#include <iostream>
using namespace std;
int main()
{
    int length = 5;
    int breadth = 7;
    int area= length*breadth;
    int perimeter= 2*(length+breadth);
    cout<<"Area of Rectangle is "<<area<< endl;
    cout<<"Perimeter of rectangle is "<<perimeter<<endl;
    return 0;
}
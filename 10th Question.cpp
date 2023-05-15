/*Take input of some length in meter and covert it to feet and inches.
 */
#include <iostream>
using namespace std;
int main()
{   int meter;
    cout<<"enter the value of meter ";
    cin>>meter;
    float feet=3.280*meter;
    cout << "The length in meter "<<feet<<endl;
    return 0;
}
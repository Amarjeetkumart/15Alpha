/*If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks.
 */
#include <iostream>
using namespace std;
int main()
{
    int p=78;
    int m=45;
    int c=62;
    int total = (p+m+c);
    int persentage = (total/3);
    cout<<"Total mark is "<<total<<endl;
    cout<<"percentage of all subject "<<persentage<<endl;
    return 0;

}
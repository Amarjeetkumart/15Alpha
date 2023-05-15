/*Now solve the above question to check if atleast one of the conditions 'a < 50' and 'a < b' is true.
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter number a ";
    cin >> a;
    cout << "Enter number b ";
    cin >> b;
    if (a < 50 | a < b)
        cout << "true";
    else
        cout << "false";
    return 0;
}
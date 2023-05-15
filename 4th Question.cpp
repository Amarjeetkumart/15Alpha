/*Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.
 */
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "enter your number ";
    cin >> num1;
    int addition = num1 + 8;
    cout << "addition is " << addition << "\n";
    int division = num1 / 3;
    cout << "division is " << division << "\n";
    int mult = num1 * 5;
    cout << "mult " << mult << "\n";
    int modulus = num1 % 5;
    cout << "modulus " << modulus;
    return 0;
}
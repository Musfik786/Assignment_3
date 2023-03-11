#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.";
    cout << "\nAns : \n";
    int n;
cout << "Enter an integer: ";
cin >> n;
if (n > 0)
cout << "You entered a positive integer: " << n << endl;
else
cout << "The number is negative and skipped ";
    return 0;
}

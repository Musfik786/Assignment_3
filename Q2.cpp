#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program to print absolute value of a number entered by the user.";
    cout << "\nAns : \n";
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if (a<0)
    {
        a = a*(-1);
    }
cout<<"The absolute value of the number is : "<<a;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program which takes the values of length and breadth from user and check if it is a square or not.";
    cout << "\nAns : \n";
    int l, b;
    cout << "Enter the length of the rectangle : \n";
    cin >> l;
    cout << "Enter the breadth of the rectangle : \n";
    cin >> b;
    l==b? cout<<"It is a square" : cout<<"It is not a square";
    return 0;
}

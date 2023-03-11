#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate Profit or Loss.";
    cout << "\nAns : \n";
    int CP,SP, amount;
cout<<"Enter cost price: ";
cin>>CP;
cout<<"Enter selling price: ";
cin>>SP;
if(SP > CP)
{
amount = SP - CP;
cout<<"Profit = "<<amount;
}
else if (CP>SP)
{
amount = CP - SP;
cout<<"Loss = "<<amount;
}
else
{
cout<<"Neither Profit Nor Loss.";
}
    return 0;
}

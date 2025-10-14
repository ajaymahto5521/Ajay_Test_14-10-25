#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter year: ";
    cin>>yr;
    if(yr%4==0 && yr%400==0)
    cout<<"This is leap year";
    
    return 0;
}
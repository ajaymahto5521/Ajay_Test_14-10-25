#include<iostream>
using namespace std;
int main()
{
    int n,digit, sum=0;
    cout<<"Enter any no.: ";
    cin>>n;
    
    while(n>0){
        digit = n%10;
        n=n/10;
        sum=sum+digit;   
    }
    cout<<"Sum of digits: "<<sum;

}
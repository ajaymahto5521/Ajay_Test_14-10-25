#include<iostream>
using namespace std;
int main()
{
    int n, digit, rev=0;
    cout<<"Enter any no.: ";
    cin>>n;
    int temp=n;
    while(n>0){
        digit = n%10;
        rev=rev*10+digit;
        n=n/10;
        
    }
    if(rev==temp)
    cout<<"Pallindrome n0";
    else
    cout<<"Not a Pallindrome";
    return 0;
}
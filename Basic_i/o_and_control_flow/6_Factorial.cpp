#include<iostream>
using namespace std;
int main()
{
   int fact=1,n, sum=0;
   cout<<"Enter any no.: ";
   cin>>n;
   
    for(int i=1; i<n; i++)
    {
    fact=fact*i;
    }
    
    cout<<"Factorial is: "<<sum;
    return 0;
}
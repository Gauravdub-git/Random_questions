#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int number=0;


    for(int i=0; i <= n; i++)
    {
        number += n*i;
        
    }
     
    cout<<"The sum of starting 10 multiples is "<< number<<endl;
}
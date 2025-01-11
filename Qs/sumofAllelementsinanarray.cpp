#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the elements in an array :  ";
    cin>>n;

    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for(int i= 0; i < n; i++)
    {
        sum= sum+arr[i];
    }

    cout<<"The sum of all the elements is " << sum ;
}
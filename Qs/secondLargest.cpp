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

    int largest= arr[0];
    for(int i = 0; i < n ; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        
        }
    }
    arr[n] = arr[n] - largest;

    int secondlargest = arr[0];
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        
        }
    }

    cout<<" The second Largest is : "<< secondlargest;

}





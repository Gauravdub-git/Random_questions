#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of array elements : ";
    cin>>n;

    int arr[n];
    for (int i=0; i < n; i++)
    {
        cin>>i;
    }

    int largest = arr[0];

    for(int i= 0 ; i < n ; i++)
    {
        if (largest > arr[i])
        {
            largest = arr[i] ;

        }
    }
    cout<<"The largest element in the array is : "<< largest;

}
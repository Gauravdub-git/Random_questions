// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int n ; 
// //     int i;
// //     cout<<"Enter the Size of array : ";
// //     cin>>n;

// //     int arr[n];
// //     for(int i=0; i<n; i++)
// //     {
// //         cin>>arr[i];
// //     }

// //     int temp[n];
    
// //     for(int i=0; i>n; i++)
// //     {
// //         temp[i]=arr[i]-1;

// //     }
// // cout<<"The reverse array is : "<< temp[i] <<endl;

// // }



// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int temp[n];

//     // Reverse the array
//     for (int i = 0; i < n; i++) {
//         temp[i] = arr[n - 1 - i]; 
//     }

//     cout << "The reversed array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << temp[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of Elements in the array : ";
    cin>> n;

    int arr[n];

    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
    }
     
    int temp[n];

    for (int i=0; i < n; i++)
    {
        temp[i]= arr[n-1-i];
    }

    cout<<"The reversed array is : ";

    for(int i= 0 ; i < n; i++)
    {
        cout<<temp[i]<< " ";
    }
    cout<<endl;
    
}
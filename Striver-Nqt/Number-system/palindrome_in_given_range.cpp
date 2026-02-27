#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int revnum = 0;
    int duplicate = n;

    while (n>0)
    {
        int lastdigit= n % 10;
        revnum = (10 * revnum) + lastdigit;
        n = n /10 ;
    }

   return duplicate==revnum;
}
int main()
{
    int n, max , min;
    cin>>max >> min;

    for (int i = min; i <= max; i++) {
        if (palindrome(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
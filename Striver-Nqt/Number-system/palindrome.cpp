#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
   int revnum=0 ;
    int dup = n; 

    while (n>0)
    {
        int ld = n % 10;
        revnum = (10*revnum) + ld;
        n = n /10;
        
    }
    if (dup==revnum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin>>n;

    if (palindrome(n))
    {
        cout<<n<<" "<<"is palindrome";
    }
    else 
    {
        cout<<n << " "<<"is not palindrome";
    }
}
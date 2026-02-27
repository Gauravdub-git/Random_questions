#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The smallest element in the array is: " << sortArr(arr) << endl;

    return 0;
}

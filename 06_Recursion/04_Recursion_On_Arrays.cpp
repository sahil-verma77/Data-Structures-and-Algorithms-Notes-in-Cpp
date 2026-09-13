#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printRec(vector<int>& arr, int idx) { // TC = O(n) ; AS = O(n)
    if (idx == arr.size()) return;
    cout << arr[idx] << " "; // work
    printRec(arr, idx+1); // call
}
int main() {
    vector<int> arr = {5,8,2,534,8,235,-8521};
    printRec(arr, 0);
}
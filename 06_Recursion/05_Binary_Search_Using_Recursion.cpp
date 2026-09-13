#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary(int lo, int hi, int target, vector<int>& arr) { // TC = O(log n) ; AS = O(logn)
    if (lo > hi) return -1;
    int mid = (lo+hi)/2;
    if (arr[mid] > target) return binary(lo, mid-1, target, arr);
    else if (arr[mid] < target) return binary(mid+1, hi, target, arr);
    else return mid;
}
int search(vector<int>& arr, int target) {
    int n = arr.size();
    return binary(0, n-1, target, arr);
}
int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;

    cout << search(arr, target) << endl;
}
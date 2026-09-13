#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void calculateSubsetSums(int idx, int currentSum, vector<int>& arr, vector<int>& ans) {
    if (idx == arr.size()) {
        ans.push_back(currentSum);
        return;
    }
    calculateSubsetSums(idx+1, currentSum + arr[idx], arr, ans); // pick
    calculateSubsetSums(idx+1, currentSum, arr, ans); // skip
}
vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    calculateSubsetSums(0, 0, arr, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
void print(vector<int>& p) {
    for (int ele : p) cout << ele << " ";
    cout << endl;
}
int main() {
    // GfG (Subset Sums)
    vector<int> arr = {1, 2, 1};

    vector<int> result = subsetSums(arr);
    print(result);
}
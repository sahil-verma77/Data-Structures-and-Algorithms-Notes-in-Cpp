#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& c) {
    int i = 0, j = 0, k = 0;
    while(i < a.size() && j < b.size()) {
        if (a[i] > b[j]) c[k++] = b[j++];
        else c[k++] = a[i++];
    }
    while(i < a.size()) c[k++] = a[i++];
    while (j < b.size()) c[k++] = b[j++];
}
void print(vector<int>& arr) {
    for (int ele : arr) cout << ele << " ";
    cout << endl;
}
int main() {
    vector<int> a = {2,3,6,8};
    vector<int> b = {1,4,5,7,9,10};

    int m = a.size(), n = b.size();
    vector<int> c(m+n);
    merge(a, b, c);
    print(c);
}
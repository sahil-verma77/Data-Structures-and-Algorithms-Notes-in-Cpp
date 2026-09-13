#include <iostream>
using namespace std;
void print(int n) { // TC = O(n)
    if (n == 0) return; // base case
    cout << n << " "; // work
    print(n-1); // call
    cout << n << " "; // work
    print(n-1); // call
    cout << n << " "; // work
}
// n = 1:- 1 1 1
// n = 2:- 2 1 1 1 2 1 1 1 2
// n = 3:- 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(n);
}
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    
    long long totalSum = static_cast<long long> (n) * (n + 1) / 2;
    long long givenSum = 0;
    int number;

    for(int i = 0; i < n-1; i++){
        cin >> number;
        givenSum += number;
    }

    cout << totalSum - givenSum << endl;

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    int sum=0;
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    int result = simpleArraySum(n, ar);
    cout <result << endl;
    return 0;
}

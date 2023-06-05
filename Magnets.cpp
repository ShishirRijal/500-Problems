// https://codeforces.com/contest/344/problem/A

#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, result = 1, cur, prev;
    cin>>n;
    // consider the first magnet
    cin>>cur;
    prev = cur;

    for(int i=1; i<n; i++) {
        cin>>cur;
        if(cur!=prev) {
            result++;
        }
        prev = cur;
    }
    cout<<result<<endl;
}

int main() {
    solve();

    return 0;
}
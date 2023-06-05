// https://codeforces.com/contest/770/problem/A
#include<iostream>
using namespace std;
void solve() {
    int n, k, rep, temp;
    char ch;
    string password = "";
    cin>>n>>k;

    for(int i=0; i<n; i++) {
        ch = 'a' + i%k;
        password += ch;
    }
    cout<<password<<endl;
}

int main() {
    solve();
    return 0;
}
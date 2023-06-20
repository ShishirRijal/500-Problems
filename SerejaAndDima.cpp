// https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s=0, d=0, turn =0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // now let's play the game
    int low = 0, high = n-1;
    while(low<=high) {
        if(a[low] > a[high]) {
                if(turn%2==0) s+=a[low];
                else d+=a[low];
            low++;
        }else {
            if(turn%2==0) s+=a[high];
            else d+=a[high];
            high--;
            }
        turn++;
        }
    cout<<s<<" "<<d<<endl;
}

int main() {
    solve();

    return 0;
}
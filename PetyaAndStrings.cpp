// https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve() {   
    string s1, s2;
    int count1=0, count2=0;
    cin>>s1;
    cin>>s2;    

    for(int i=0; i<s1.size(); i++) {
        if(s1[i] < 96)
            s1[i] = char(s1[i] + 32);
        if(s2[i] < 96)
            s2[i] = char(s2[i] + 32);
    }
    cout<<s1.compare(s2)<<endl;
}
int main() {

    solve();
    return 0;
}
// https://codeforces.com/contest/709/problem/A

#include <iostream>
using namespace std;
int main() {
    long int n, b, d, wc=0, counter=0;
    cin>>n>>b>>d;
    long int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] > b)
            continue;
        wc+=a[i];
        if(wc>d)
        {
            wc = 0; 
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
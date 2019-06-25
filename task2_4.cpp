#include<bits/stdc++.h>
using namespace std;

int main() {
    long n,m;
    cin>>n>>m;
    long brick[m];
    for(long i=0;i<m;i++)
        cin>>brick[i];

    sort(brick,brick+m);

    for(long i =1;i<=m-n;i++)
        brick[i] = brick[i-1] + brick[i];

    long small = brick[m-n];
    for(long i = m-n+1;i<=m;i++)
            if(brick[i]<small)
            small=brick[i];
    cout<<small;
}

#include<iostream>
using namespace std;

int main () {

    long n,q,v,l,r;
    cin>>n>>q;
    long arr1[n] = {0},arr2[n] = {0};
    for(long i=0;i<n;i++)
        arr1[i]=i+1;
    for(long i=0;i<q;i++) {
            cin>>l>>r>>v;
            arr2[l-1] = arr2[l-1] + v;                // starting where value adds
            arr2[r] = arr2[r] - v;                    // to add value till right and then subtract from total
    }
    long maxi = arr1[0] + arr2[0], sumq=arr2[0];     // sum of v given in queries
    for(long i=1;i<n;i++) {
            sumq=sumq+arr2[i];
            if(arr1[i] + sumq > maxi)
                maxi=arr1[i] + sumq;
    }
    cout<<maxi<<endl;
}


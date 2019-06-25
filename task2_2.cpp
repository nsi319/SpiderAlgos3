#include<iostream>
#include<string>
using namespace std;
int main () {
    // like stack
    long long int t,i=0,j=0,k=0,c=0,p=0;
    string s;
    cin>>t;
    int result[t];
    while(t--) {   // < 1, >2
            c=0;
            cin>>s;
            if(s[0]=='>') {
                result[p]=0;
                p++;
            }
            else {
            int arr[s.size()];
            for(i=s.size()-1;i>=0;i--) {
                    if(s[i]=='>') {
                        arr[j]=2;
                        j++;
                        k=j;
                    }
                    else if(s[i]=='<') {
                        arr[k-1]=3;        //(1+2 pair)
                        k--;
                    }
            }
            int maxi=0;
            for(i=0;i<j;i++) {          //find largest repeating 3
                if(arr[i]==3)
                    c++;
                else if(arr[i]==2) {
                    if(c>maxi)
                       maxi=c;
                    c=0;
                }
            }

             result[p]=maxi*2;
             p++;
            }
    }
    for(i=0;i<p;i++)
        cout<<result[i]<<endl;
}









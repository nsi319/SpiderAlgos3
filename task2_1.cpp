#include<iostream>


using namespace std;
long long int c=0;
long long int funct(long long int val) {
    long long int sum=0;
    while(val>0) {
        sum+=val%10;
        val=val/10;
    }
    c++;
    return sum;
}

int main(){
  long long int n;
  cin>>n;
  if(n/10==0)
    cout<<c+1;
  else {
 while(n/10!=0) {
        n=funct(n);
}
cout<<c;
}
}

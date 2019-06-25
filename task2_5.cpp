 #include <bits/stdc++.h>
using namespace std;

long count_primes(long n) {
	bool prime[n+1];
	memset(prime,true,n+1);             // true if prime
	long c=0;
	for (long i=2; i*i<=n; i++) {
		if (prime[i] == true) {
			for (int j=i*i; j<=n; j=j+i)            // make all other factors of a prime number false
				prime[j] = false;
		}
	}
	for (long k=2; k<=n; k++)
	if (prime[k]==true)
        c++;
    return c;

}
int main() {
    long n;
    cin>>n;
	long c = count_primes(n);
	cout<<c*(c+1)/2<<endl;
}

#include <iostream>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

void sieveOfEratoSthenes(int n)
{
    bool isPrime[n+1];
    isPrime[0] = false;
    isPrime[1] = false;

    for(int p = 2; p <= n; p++) {
        isPrime[p] = true;
    }

    for(int i = 0; i <= sqrt(n); i++) {
        for(int j = 2*i; j <= n; j += i) {
            isPrime[j] = false;
        }
    }

    for(int x = 0; x <= n; x++) {
        cout<<x<<": "<<isPrime[x];
    }
}

int gcd(int a, int b) {
    if(b == 0) return a;
    else {
        return gcd(b, a % b);
    }
}

int main() {
    sieveOfEratoSthenes(20);
    int hcf = gcd(24, 60);
    cout<<"\n"<<hcf;
    return 0;
}
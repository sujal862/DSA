#include <iostream>
using namespace std;

const int m = 1000000007;

long long binexp(long long a, long long b) {
    if (b == 0) return 1;
    long long res = binexp(a, b / 2);

    if (b % 2 != 0) {
        return (a * res*res) % m;
    } else {
        return (res*res)%m ;
    }
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = (fact * i) % m;
    }
    return fact;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long np = (factorial(k) * binexp(factorial(k - n), m - 2)) % m;  // Fermat's Little Theorem
        cout << np << endl;
    }

    return 0;
}

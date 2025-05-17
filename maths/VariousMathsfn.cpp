#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
const int MAX = 1000001;
long long fact[MAX], invFact[MAX];

// Fast Exponentiation (x^y % p)
long long power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}

// Precompute Factorials & Inverses
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++)
        fact[i] = (fact[i-1] * i) % MOD;
    
    invFact[MAX-1] = power(fact[MAX-1], MOD-2, MOD);
    for (int i = MAX-2; i >= 0; i--)
        invFact[i] = (invFact[i+1] * (i+1)) % MOD;
}

// GCD and LCM
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Compute nCr % MOD
long long nCr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * invFact[r] % MOD * invFact[n-r] % MOD) % MOD;
}

// Fast Multiplication to avoid overflow (a * b % mod)
ll mulmod(ll a, ll b, ll mod) {
    ll res = 0;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res + a) % mod;
        a = (a * 2) % mod;
        b >>= 1;
    }
    return res;
}

// Extended GCD (for Modular Inverse if MOD is not prime)
ll extended_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    ll x1, y1;
    ll g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
ll modInverse(ll a, ll mod) {
    ll x, y;
    ll g = extended_gcd(a, mod, x, y);
    if (g != 1) return -1; // No inverse exists
    return (x % mod + mod) % mod;
}

// Euler’s Totient Function φ(n)
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            result -= result / i;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}

// Prime Sieve (for fast prime checking)
vector<bool> isPrime(MAX, true);
void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }
}

// Finding Prime Factors
vector<ll> primeFactors(ll n) {
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    precompute();
    sieve();
    
    int n = 10, r = 3;
    cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    cout << "GCD of 24 and 36: " << gcd(24, 36) << endl;
    cout << "LCM of 24 and 36: " << lcm(24, 36) << endl;
    cout << "Euler Totient of 10: " << phi(10) << endl;
    
    cout << "Prime factors of 84: ";
    vector<ll> factors = primeFactors(84);
    for (ll f : factors) cout << f << " ";
    cout << endl;
    
    return 0;
}

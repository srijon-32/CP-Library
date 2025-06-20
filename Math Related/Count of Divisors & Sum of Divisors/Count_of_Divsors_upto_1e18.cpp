/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define nl "\n"
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

const int mod = 1e9 + 7;

using u64 = uint64_t;

// fallback for multiplying large number under mod
u64 mul_mod(u64 a, u64 b, u64 mod) {
    u64 res = 0;
    a = a % mod;
    b = b % mod;

    while (b > 0) {
        if (b & 1) res = (res + a) % mod;
        a = (a + a) % mod;
        b /= 2;
    }
    return res;
}

u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = mul_mod(result, base, mod);
        base = mul_mod(base, base, mod);
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = mul_mod(x, x, n);
        if (x == n - 1)
            return false;
    }
    return true;
}

bool MillerRabin(u64 n) { // returns true if n is prime, else false.
    if (n < 2)
        return false;

    int r = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d /= 2;
        r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == (u64)a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}

ll countDivUpto1e18(ll num)
{
    ll N = 1000000;
    vector<char> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;

    vector<ll> primes;
    for (ll i = 2; i <= N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= N; j += i) is_prime[j] = false;
        }
    }

    ll total = 1;

    for (ll el : primes) {
        if (el * el * el > num) break;

        ll e = 0;
        while (num % el == 0) {
            e++;
            num /= el;
        }
        total *= (e + 1);
    }

    ll sqr = sqrtl(num);
    if (MillerRabin(num))
        total *= 2;
    else if (sqr * sqr == num && MillerRabin(sqr))
        total *= 3;
    else if (num != 1)
        total *= 4;

    return total;
}

void solve()
{
    ll n;
    cin >> n;
    cout << countDivUpto1e18(n) << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}

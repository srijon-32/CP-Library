#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl "\n"
#define all(v) v.begin(), v.end()
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

struct Stack {
    vector<ll> s, gc;
    void push(ll x) {
        s.push_back(x);
        if (gc.empty())
            gc.push_back(x);
        else
            gc.push_back(::gcd(gc.back(), x));
    }
    ll pop() {
        ll res = s.back();
        s.pop_back();
        gc.pop_back();
        return res;
    }
    bool empty() { return s.empty(); }
    ll gcd() { return gc.back(); }
};

Stack s1, s2;

void add(ll x) { s2.push(x); }

void remove() {
    if (s1.empty()) {
        while (!s2.empty()) {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

bool good() {
    if (s1.empty()) return s2.gcd() == 1;
    if (s2.empty()) return s1.gcd() == 1;
    return gcd(s1.gcd(), s2.gcd()) == 1;
}

int32_t main() {
    FIO

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll ans = LONG_MAX, l = 0;
    for (ll r = 0; r < n; r++) {
        add(v[r]);
        if (good()) ans = min(ans, r - l + 1);
        while (good()) {
            remove();
            l++;
        }

        // if (good()) ans = min(ans, r - l + 1);
    }

    if (ans == LONG_MAX) ans = -1;
    cout << ans << nl;

    return 0;
}

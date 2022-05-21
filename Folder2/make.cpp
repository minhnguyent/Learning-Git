#include <bits/stdc++.h>
#define uint unsigned int
#define ll long long
#define ull unsigned long long
#define sqr(a) (1LL * (a) * (a))
using namespace std;

const int mod = 1000000007;
const int inf = 0x3f3f3f3f;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// up to ULLONG_MAX = 2^64 - 1
// use: rng()

#ifndef ONLINE_JUDGE
#define mt(args...) { string _s = #args; replace(begin(_s), end(_s), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); out_error(_it, args); cout << '\n';}

void out_error(istream_iterator<string> it) {}
template<typename T, typename... Args>
void out_error(istream_iterator<string> it, T a, Args... args) {
    cerr << " [" << *it << " = " << a << "] ";
    out_error(++it, args...);
}
#endif

int powmod(ll a, ll n, int mod = mod) {
    a %= mod; int res = 1;
    while (n) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod; n /= 2;
    }
    return res;
}


//-----------------------------------------------------------------------//

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    

    return 0;
}
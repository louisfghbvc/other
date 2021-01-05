#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define louisfghbvc int t; cin >> t; while(t--)
#define sz(x) (int)(x).size()
using namespace std;
typedef long long LL;
typedef pair<LL, LL> ii;
typedef vector<int> vi;

template<typename T> istream& operator>>(istream &is, vector<T> &v) { for(auto &it : v) is >> it; return is; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

const int N = 18;
const int mod = 1e9+7;
bool dp[500];

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;

    int tot = accumulate(All(arr), 0);
    if(tot % 2){
        cout << "NO\n";
        return;
    }

    tot >>= 1;

    memset(dp, 0, sizeof dp);

    dp[0] = 1;
    for(int i = 0; i < n; ++i){
        for(int w = tot; w >= arr[i]; --w)
            dp[w] |= dp[w-arr[i]];
    }

    cout << (dp[tot] ? "YES\n" : "NO\n");
}

int main()
{
    Fast;
    louisfghbvc
        solve();
    return 0;
}

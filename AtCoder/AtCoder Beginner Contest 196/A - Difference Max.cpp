#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define louisfghbvc int t; cin >> t; while(t--)
#define sz(x) (int)(x).size()
using namespace std;
typedef long long LL;
typedef pair<LL, LL> ii;
typedef vector<LL> vi;

template<typename T> istream& operator>>(istream &is, vector<T> &v) { for(auto &it : v) is >> it; return is; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

const int N = 55;
const int inf = 0x3f3f3f3f;
/**
Read problem statement carefully
**/

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = INT_MIN;
    for(int x = a; x <= b; ++x){
        for(int y = c; y <= d; ++y){
            res = max(res, x-y);
        }
    }
    cout << res << "\n";
}

int main()
{
    Fast;
    //louisfghbvc
        solve();
    return 0;
}

/**
Enjoy the problem.
**/

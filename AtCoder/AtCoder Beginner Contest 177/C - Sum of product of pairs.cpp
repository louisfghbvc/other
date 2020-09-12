// if O(N^2). TLE, so find the monotonous. say j.
// if a = [1,2,3]. 1x2, 1x3, 2x3. see? total = 1x2 + (1+2)x3. so prefix sum
// O(N)

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
 
void dbg_out() { cerr << "\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
 
const int mod = 1e9+7;
const int N = 2e5+5;
 
void solve(){
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;
 
    LL sum = 0;
    vi pre(n+1);
    pre[0] = 0;
    for(int i = 1; i <= n; ++i)
        pre[i] = (pre[i]+pre[i-1]+arr[i-1])%mod;
    //dbg_out(pre);
    for(int i = 1; i < n; ++i){
        sum = sum + (arr[i]*pre[i]) % mod;
        sum %= mod;
    }
 
    cout << sum << "\n";
}
 
int main()
{
    Fast;
    //louisfghbvc{
        solve();
    //}
    return 0;
}

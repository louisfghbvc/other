// Simple observe that total is zero = no.
// otherwise sort from small or from big.
// check sum > 0, sort by big. 
// sum < 0, sort by small
// O(NlogN)

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

const int mod = 1e9+7;

void solve(){
    int n;
    cin >> n;
    vi arr(n); cin >> arr;
    int sum = 0;
    for(int i = 0; i < n; ++i) sum += arr[i];
    if(!sum){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(sum > 0) sort(arr.rbegin(), arr.rend());
    else sort(All(arr));
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " \n"[i==n-1];
}

int main()
{
    Fast;
    louisfghbvc
        solve();
    return 0;
}

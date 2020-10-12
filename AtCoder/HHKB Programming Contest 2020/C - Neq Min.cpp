// cuz smallest possible value is increasing. so just maintain a set.
// when count add 1. 
// O(N).

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

const int N = 1e3+5;

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;

    unordered_set<int> st;
    int sm = 0;
    for(int i = 0; i < n; ++i){
        st.insert(arr[i]);
        while(st.count(sm)) sm++;
        cout << sm << "\n";
    }

}

int main()
{
    Fast;
    //louisfghbvc
        solve();
    return 0;
}

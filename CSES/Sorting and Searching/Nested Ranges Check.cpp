#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
#define sz(x) (int)(x).size()
#define sort_unique(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()));
using namespace std;
typedef long long LL;
typedef pair<LL, LL> ii;
typedef vector<LL> vi;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T> istream& operator>>(istream &is, vector<T> &v) { for(auto &it : v) is >> it; return is; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

const int N = 1e6 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;
/**
Read problem statement carefully
**/

void solve(int T){
    int n;
    cin >> n;
    typedef array<int, 3> node;
    vector<node> arr(n);
    for(int i = 0, l, r; i < n; ++i){
        cin >> l >> r;
        arr[i] = {l, r, i};
    }
    sort(All(arr), [](auto &a, auto &b){
        return a[0] < b[0] || a[0] == b[0] && a[1] > b[1];
    });

    set<int> st;
    vector<bool> cover(n), be_cover(n);
    for(int i = 0; i < n; ++i){
        auto p = st.lower_bound(arr[i][1]);
        be_cover[arr[i][2]] = p != st.end();
        st.insert(arr[i][1]);
    }
    st.clear();
    // more left, more cover
    for(int j = n-1; j >= 0; --j){
        // find <= cur right
        auto p = st.upper_bound(arr[j][1]);
        cover[arr[j][2]] = p != st.begin();
        st.insert(arr[j][1]);
    }

    for(auto x: cover) cout << x << " ";
    cout << "\n";
    for(auto x: be_cover) cout << x << " ";
    cout << "\n";
}

int main()
{
    Fast;
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/

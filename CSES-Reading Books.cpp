// Problem: Reading Books
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1631
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pII pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
 
#define rep(i, a, b) for (int i = a; i < b; i++)
#define do(i, a, b) for (int i= (a); i <= (b); i++)
 
#define all(x) (x).begin(),(x).end()
#define sorted(s) sort((s).begin(),(s).end())
#define F first
#define S second
#define pb push_back
#define sz(x) (int)(x).size()
#define deb(x) cout << x << endl;
#define CASES int tc;cin>>tc;while(tc--)
#define READ_INP freopen("inp.txt", "r", stdin)
#define UNIQUE(X) (X).erase(unique(S(X)),(X).end())
#define mnpq priority_queue<int, vector<int>, greater<int> >
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define DISPV(v) { for(auto u: v) cout << u << " "; cout << endl; }
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define endl '\n'
 
const int inf = 1e18; const int M = 1e9 + 7; const int N = 1e5 + 5;
const double pi = acos(-1.0);
 
//DEBUGGING-TOOL
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr <<*it << " = " << a << ",   " << endl;
    err(++it, args...);
}
 
//FUNC
 
 
//CODE
int32_t main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// freopen("Inp.txt", "r", stdin);
// freopen("Out.txt", "w", stdout);
// #endif
int n,m,l,r,d,b,k,u,p,q,x,y,z,mn,mx,rem,ans=0,res=0,c=0,node,edge,sum=0,cnt=0,c1=0,c2=0,c3=0;
//int T;
// cin >> T;
// while(T--){
// 
// }
cin >> n;
vector<int>v(n);
for(int &x: v) {cin >> x;}
sum = accumulate(all(v),0LL);
sorted(v);
cout << max(1LL*2*v[n-1],sum) << '\n';
}
//<EXPLANATION>
/*
(CASE - 1) > If the greater number is greater than the the sum of the rest of all values
then the answer is 2*v[n-1];
 
**VISUALIZATION:
1 2 3 3 4 15
 
A - 15        B - 4
                  3
                  3
                  2
                  1
4                 15
3
3
2
1
(CASE - 2): Else the ans is sum of all values.
 
**VISUALIZATION:
1 2 3 4 5 6
A - 6      B - 5
    3          4
    1          2
    5          3
    4          1
    
    
*/
 

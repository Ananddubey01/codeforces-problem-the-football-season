#include<bits/stdc++.h>
using namespace std;
#define fi              first
#define se              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pll             pair<ll,ll>
#define vll              vector<int>
#define mll             map<ll,ll>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define md             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
void hi()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
void bye()
{
	#ifndef ONLINE_JUDGE
	cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
	#endif
}
void solve()
{
	ll n,p,w,d,x=0,y; cin>>n>>p>>w>>d;
	bool flag=false;
	for(y=0;y<w && y<n;y++)// constrain for y
	{
		if((p-d*y)%w==0 && (p-d*y)/w<=n && (p-d*y)/w>=0)// constrain for x
		{
			x=(p-d*y)/w;
			flag=true;
			break;
		}
	}
	if(n-(x+y)<0 || !flag) {cout<<"-1"; return;}//constrain for z
	cout<<x<<" "<<y<<" "<<n-x-y;
}
int main()
{
	hi();
	ll test_cases=1;// cin>>test_cases;
	for(ll t=1;t<=test_cases;t++)
	{
		solve();
	}
	bye();
	return 0;
}

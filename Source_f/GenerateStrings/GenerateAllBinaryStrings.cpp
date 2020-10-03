#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define TC ll t;cin>>t; for(ll _ = 1;_ <=t;_ ++)
#define bs binary_search
#define pll pair<ll,ll>
#define ppll pair<ll,pll>
#define vvll vector<vector<ll>>
#define sll stack<ll>
#define qll queue<ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vc vector <char>
#define F first
#define S second
#define MOD 10e9 + 7
#define mxn 10e18
#define ln "\n"
#define print cout<<"Case #"<<_<<": "<<ans<<ln;

using namespace std;

ll bstring(ll n , ll end)
{
	// Base Case ..  
	if(n == 0)
		return  1;
	// Recursive Case... 

	ll ans  = 0;

	if(end == 0)
	{
			return bstring(n-1 , 0) + bstring(n-1 , 1);
	}
	else
	{
		return bstring(n-1 , 0);
	}

}


void solve()
{
	ll n;
	cin>> n;
	ll ans  =  bstring(n-1 , 0) + bstring(n-1 , 1);

	cout<<ans<<ln;


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();
	return 0;
}

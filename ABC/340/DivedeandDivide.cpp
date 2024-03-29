#include <bits/stdc++.h>


using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

unordered_map<ll,ll> memo;

ll f(ll x){
	if(x == 1) return 0;
	if(memo.count(x)) return memo[x];
	ll res = f(x/2) + f(x-x/2) + x;
	return memo[x] = res;

}



int main(void){

	ll N; cin >> N;
	cout << f(N) << endl;

	return 0;

}

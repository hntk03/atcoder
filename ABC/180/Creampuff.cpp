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

int main(void){

	ll N; cin >> N;
	set<ll> ans;

	for(ll i=1;i*i<=N;i++){
		if(N%i == 0){
			ans.insert(i);
			ans.insert(N/i);
		}
	}

	for(auto x: ans) cout << x << endl;

	return 0;

}

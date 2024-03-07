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

	int K; cin >> K;

	vector<ll> v;

	REP(s,1<<10){
		ll x = 0;
		for(int i=9; i>=0;i--){
			if((s>>i)&1){
				x = x*10+i;
			}
		}
		if(x == 0) continue;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	cout << v[K-1] << endl;


	return 0;

}

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

	vector<int> idx;

	ll tmp = N;
	for(int i = 0;i<60;i++){
		if((tmp>>i)&1) idx.push_back(i);
	}

	REP(i,1<<idx.size()){
		ll ans = 0;
		bitset<60> bit(i);
		REP(i,60){
			if(i >= idx.size()) continue;
			if(!bit[i]) continue;
			ans += 1L << idx[i];
		}
		cout << ans << endl;
	}

	return 0;

}

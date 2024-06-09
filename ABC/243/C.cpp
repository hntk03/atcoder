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
	vector<ll> X(N), Y(N);
	REP(i,N) cin >> X[i] >> Y[i];
	string S; cin >> S;

	map<ll, pair<ll, ll> > mp;

	REP(i,N){
		if(mp.count(Y[i]) == 0){
			if(S[i] == 'L'){
				mp[Y[i]].first = 1e9+1;
				mp[Y[i]].second = X[i];
			}else{
				mp[Y[i]].first = X[i];
				mp[Y[i]].second = -1;
			}
		}else{
			if(S[i] == 'L'){
				mp[Y[i]].second = max(mp[Y[i]].second, X[i]);
			}else{
				mp[Y[i]].first = min(mp[Y[i]].first, X[i]);
			}
		}
	}

	for(auto x : mp){
		if(x.second.first == (1e9+1) or x.second.second == -1) continue;
		if(x.second.first < x.second.second){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;

}

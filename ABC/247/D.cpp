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

	int Q; cin >> Q;	
	deque<pair<ll, ll>> dq;

	vector<ll> ans;
	REP(i,Q){
		int mode; cin >> mode;
		if(mode == 1){
			int x, c; cin >> x >> c;
			if(dq.size() >= 1 and dq.back().first == x) dq.back().second += c;
			else dq.push_back(make_pair(x, c));
		}else{
			ll c; cin >> c;
			ll sum = 0;
			while(c>0){
				if(dq.front().second == 0) dq.pop_front();
				ll pick = min(dq.front().second, c);
				sum += dq.front().first * pick;
				dq.front().second -= pick;
				c -= pick;
			}
			ans.push_back(sum);
		}
	}

	for(ll x : ans) cout << x << endl;

	return 0;

}

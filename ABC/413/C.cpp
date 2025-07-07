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
	queue<pair<ll, ll>> que;
	REP(i,Q){
		int type; cin >> type;

		if(type == 1){
			ll c, x; cin >> c >> x;
			if(que.size() == 0) que.push(make_pair(x, c));
			else if(que.back().first == x) que.back().second += c;
			else que.push(make_pair(x, c));
		}else{
			ll k; cin >> k;
			ll cnt = 0;
			ll sum = 0;
			while(k > 0){
				ll now = min(que.front().second, k);
				sum += now * que.front().first;
				k -= now;
				que.front().second -= now;
				if(que.front().second == 0) que.pop();
			}
			cout << sum << endl;
		}
	}

	return 0;

}

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
	vector<ll> ans;
	priority_queue<ll, vector<ll>, greater<ll>> que;

	ll bias = 0;
	REP(qi,Q){
		int type; cin >> type;
		if(type == 3){
			ll num = que.top();
			que.pop();
			ans.push_back(bias + num);
		}
		else{
			ll X; cin >> X;
			if(type == 1){
				que.push(X-bias);
			}else{
				bias += X;
			}
		}
	}

	for(ll x : ans){
		cout << x << endl;
	}

	return 0;

}

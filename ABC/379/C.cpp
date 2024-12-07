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

ll oneToN(ll n){
	return n*(n+1)/2;
}

int main(void){

	int N, M; cin >> N >> M;
	vector<pair<int, ll>> V(M);

	REP(i,M){
		int X; cin >> X;
		X--;
		V[i] = make_pair(X, 0);
	}

	REP(i,M){
		ll A; cin >> A;
		V[i].second = A;
	}

	sort(V.begin(), V.end());


	if(V.front().first != 0){
		cout << -1 << endl;
	}

	stack<pair<int, ll>> st;
	FOR(i,1,M){
		st.push(make_pair(i-1, V[i-1].second));

		ll diff = V[i].first - V[i-1].first - 1;
		while(!st.empty()){
			if(diff == 0) break;
			pair<int, ll> top = st.top(); st.pop();
			top.second -= diff;

			if(top.second < 0){
				diff = - top.second;
			}else{
				st.push(top);
			}

			ll use = min(diff, st.top().second);

		}

	}
	


	return 0;

}

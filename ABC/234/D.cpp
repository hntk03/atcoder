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

	int N, K; cin >> N >> K;
	vector<int> P(N);
	REP(i,N) cin >> P[i];

	priority_queue<int, vector<int>, greater<int>> que;

	REP(i,K) que.push(P[i]);

	vector<int> ans;
	ans.push_back(que.top());

	FOR(i,K,N){
		if(P[i] < que.top()){
			ans.push_back(que.top());
		}else{
			que.push(P[i]);
			que.pop();
			ans.push_back(que.top());
		}
	}

	for(int x : ans) cout << x << endl;

	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, M; cin >> N >> M;
	priority_queue<int> q;

	REP(i,N){
		int A; cin >> A;
		q.push(A);
	}

	REP(i,M){
		int A = q.top(); q.pop();
		q.push(A/2);
	}

	ll ans = 0;
	REP(i,N){
		ans += q.top(); q.pop();
	}

	cout << ans << endl;

	return 0;

}

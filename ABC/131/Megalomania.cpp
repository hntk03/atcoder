#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	vector<pair<int, int>> w(N);
	REP(i,N){
		int A, B; cin >> A >> B;
		w[i] = make_pair(B, A);
	}

	SORT(w);

	bool ans = true;
	ll cnt = 0;
	REP(i,N){
		if(cnt+w[i].second <= w[i].first) cnt += w[i].second;
		else ans = false;
	}
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}

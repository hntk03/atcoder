#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> v(N);
	REP(i, N) cin >> v[i];
	SORT(v);

	double ans = v[0];
	FOR(i,1,N){
		ans = (v[i] + ans) / 2.0;
	}

	cout << ans << endl;


	return 0;

}

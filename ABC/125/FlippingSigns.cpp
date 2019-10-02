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
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	int cnt = 0;
	ll sum = 0;
	ll min_value = 1e9;
	REP(i,N){
		if(A[i] < 0) cnt++;
		sum += abs(A[i]);
		min_value = min(abs(A[i]), min_value);

	}

	if(cnt % 2 == 0) cout << sum << endl;
	else cout << sum - min_value * 2 << endl;



	return 0;

}

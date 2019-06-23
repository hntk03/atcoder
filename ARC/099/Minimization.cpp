#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, K; cin >> N >> K;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int ans = N/(K-1);
	cout << ans << endl;


	return 0;

}

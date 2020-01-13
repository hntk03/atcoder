#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int N, K, M; cin >> N >> K >> M;
	int sum = 0;
	REP(i, N-1){
		int A; cin >> A;
		sum += A;
	}

	int ans = M * N - sum;
	if(ans > K) cout << -1 << endl;
	else cout << max(ans, 0) << endl;



	return 0;

}

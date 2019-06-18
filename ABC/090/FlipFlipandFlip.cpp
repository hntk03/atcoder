#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, M; cin >> N >> M;
	
	long long ans;
	if(N == 1 and M == 1) ans = 1;
	else if(N == 1 and M > 1) ans = M-2;
	else if(M == 1 and N > 1) ans = N-2;
	else ans = (long long)(N-2)*(M-2);

	cout << ans << endl;

	return 0;

}

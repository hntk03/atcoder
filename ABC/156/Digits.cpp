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

	int N, K; cin >> N >> K;
	int ans = 0;
	while(N != 0){
		N /= K;
		ans++;
	}

	cout << ans << endl;

	return 0;

}

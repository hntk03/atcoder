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

	ll N, M; cin >> N >> M;

	ll ans = 0;
	if((M/2)<N){
		ans += M/2;
	}else{
		ans += N;
		M -= N*2;
		ans += M / 4;
	}

	cout << ans << endl;


	


	return 0;

}

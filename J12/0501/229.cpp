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

	ll A, B; cin >> A >> B;

	ll ans = B / 4 - (A-1) /4;
	ans -= B / 100 - (A-1) / 100;
	ans += B / 400 - (A-1) / 400;

	cout << ans << endl;



	return 0;

}

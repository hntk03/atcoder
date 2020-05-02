#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	
	ll X; cin >> X;
	ll tmp = 100;

	ll ans = 0;
	while(tmp < X){
		tmp = tmp * 1.01;
		ans++;
	}

	cout << ans << endl;




	return 0;

}

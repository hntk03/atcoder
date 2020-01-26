#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	ll H; cin >> H;

	ll ans = 0;
	ll cnt = 0;
	while(H != 1){
		H /= 2;
		ans += pow(2, cnt++);
	}

	ans += pow(2, cnt++);
	cout << ans << endl;



	return 0;

}

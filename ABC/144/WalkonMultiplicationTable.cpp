#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	ll N; cin >> N;

	ll ans = 0;
	ll d = (int)(sqrt(double(N))) + 1;
	while(d > 0){
		if(N % d == 0){
			ll p = N / d;
			ll q = N / p;
			ans = p - 1 + q - 1;
			break;
		}
		d--;

	}

	cout << ans << endl;

	return 0;

}

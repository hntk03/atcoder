#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	ll A, B, X; cin >> A >> B >> X;

	ll l = 0, r = ll(1e9+1);
	auto keta = [&](ll c){
		int res = 0;
		while(c){
			c/= 10;
			res++;
		}
		return res;
	};
	auto f = [&](ll c){
		return A * c + B*keta(c);
	};
	while(r-l > 1){
		ll c = (l+r)/2;
		if(f(c) <= X) l = c;
		else r = c;
	}

	cout << l << endl;

	return 0;

}

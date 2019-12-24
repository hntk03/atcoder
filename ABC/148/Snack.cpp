#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b){
	return a * b / gcd(a, b);
}

int main(void){

	ll A, B; cin >> A >> B;

	ll ans = lcm(A, B);

	cout << ans << endl;

	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

ll A, B, C, D; 

ll gcd(ll a, ll b){
	if(b == 0) return a;
	else gcd(b, a % b);
}
ll lcm(ll a, ll b){
	return a*b / gcd(a, b);
}

ll f(ll x){

	ll l = lcm(C, D);
	ll ans = x - x / C  - x / D + x / l;
	return ans;
}


int main(void){

	cin >> A >> B >> C >> D;
	cout << f(B) - f(A-1) << endl;
	
	


	return 0;

}

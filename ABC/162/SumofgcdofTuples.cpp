#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;
ll gcd(ll a,ll b) {
	if (a%b==0) return(b);
	else return(gcd(b,a%b));
}


int main(void){

	int K; cin >> K;

	ll ans = 0;
	FOR(i,1,K+1){
		FOR(j,1,K+1){
			FOR(k,1,K+1){
				ans += gcd(i, gcd(j, k));
			}
		}
	}

	cout << ans << endl;
	return 0;

}

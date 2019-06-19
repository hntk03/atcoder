#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


long long gcd(long long a, long long b){
	if(b == 0) return a;
	return gcd(b, a%b);
}
long long lcm(long long a, long long b){
	return a/gcd(a, b)*b; // Be careful not to overflow
}



int main(void){

	int N; cin >> N;
	vector<long long int> T(N);

	REP(i,N) cin >> T[i];

	long long ans = T[0];
	FOR(i,1,N) ans = lcm(ans, T[i]);

	cout << ans << endl;

	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	ll N, K; cin >> N >> K;
	vector<int> a(N);

	REP(i,N) cin >> a[i];
	ll ans = (ll)N*(N+1)/2;

	ll sum = 0;
	int j = 0;
	REP(i,N){
		while(sum+a[j] < K and j < N){
			sum += a[j++];
		}
		ans -= j-i;
		sum -= a[i];
	}
	
	cout << ans << endl;


	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

ll reverse(ll x){
	ll res = 0;
	while(x > 0){
		res *= 10;
		res += x%10;
		x /= 10;
	}

	return res;
}

int main(void){

	ll N, K; cin >> N >> K;		

	// ll x = min(K, reverse(K));
	ll a = min(K, reverse(K));
	ll b = max(K, reverse(K));

	ll ans = 0;
	if(a <= N) ans++;
	if(b <= N) ans++;
	ll cnt = 0;
	ll x = a*10;
	while(x <= N){
		ans++;
		cnt++;

		if(cnt % 2 == 0){
			a *= 10;
			x = a; 
		} 
		else{
			b *= 10;
			x = b;
		}
		// x = reverse(x);
	}

	cout << ans << endl;


	return 0;

}

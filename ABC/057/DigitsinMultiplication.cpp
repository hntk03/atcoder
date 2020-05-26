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

ll func(ll A, ll B){
	string a = to_string(A);
	string b = to_string(B);

	return max(a.length(), b.length());
}

int main(void){

	ll N; cin >> N;

	ll ans = 100;
	for(ll i=1;i*i <=N;++i){
		if(N%i == 0) ans = min(ans, func(i, N/i));
	}

	cout << ans << endl;


	return 0;

}

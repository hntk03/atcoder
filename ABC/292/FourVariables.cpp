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

ll f(int x){
	ll res = 0;
	for(int i = 1; i*i <= x; i++){
		if(x%i != 0) continue;
		int j = x/i;
		if(i == j) res++;
		else res += 2;
	}

	return res;
}

int main(void){

	int N; cin >> N;	

	ll ans = 0;
	for(int x = 1; x < N; x++){
		ans += f(x)*f(N-x);
	}

	cout << ans << endl;

	return 0;

}

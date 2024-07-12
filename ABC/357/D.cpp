#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	ll N; cin >> N;	
	mint a = 1;

	{
		ll _N = N;
		while(_N){
			a *= 10;
			_N /= 10;
		}
	}

	mint s = (a.pow(N) - 1) / (a - 1);
	s *= N;

	cout << s.val() << endl;

	return 0;

}

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
const int M = 60;

ll tos(vector<int> x){
	ll res = 0;
	REP(i,M) res += (ll)x[i] << i;
	return res;
}

int main(void){

	ll a, b, C; cin >> a >> b >> C;

	ll one = __builtin_popcountll(C);
	ll zero = M - one;

	ll d = a + b - one;
	if(d < 0 || d%2 == 1){
		cout << -1 << endl;
		return 0;
	}
	
	d /= 2;
	a -= d;
	b -= d;

	if(d > zero || a < 0 || b < 0){
		cout << -1 << endl;
		return 0;
	}

	vector<int> x(M), y(M);
	vector<int> i0, i1;
	REP(i,M){
		if(C>>i&1) i1.push_back(i);
		else i0.push_back(i);
	}

	REP(j,d){
		int i = i0[j];
		x[i] = y[i] = 1;
	}

	REP(j,one){
		int i = i1[j];
		if(j < a) x[i] = 1;
		else y[i] = 1;
	}

	cout << tos(x) << " " << tos(y) << endl;
	return 0;

}

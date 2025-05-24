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

int main(void){

	int N, K; cin >> N >> K;
	ll M = 1;
	REP(i,K) M *= 10;

	ll X = 1;
	REP(i,N){
		ll A; cin >> A;
		if((M-1)/X < A) X = 1;
		else X *= A;
	}

	cout << X << endl;
	return 0;

}

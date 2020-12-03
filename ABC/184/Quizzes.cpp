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

	ll N, X; cin >> N >> X;
	string S; cin >> S;

	for(ll i=0;i<N;i++){
		if(S[i] == 'o') X++;
		else if(S[i] == 'x' and X != 0) X--;
	}

	cout << X << endl;

	return 0;

}

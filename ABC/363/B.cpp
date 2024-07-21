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

	int N, T, P; cin >> N >> T >> P;	
	vector<int> L(N);
	REP(i,N) cin >> L[i];

	REP(i,N){
		if(L[i] >= T) L[i] = 0;
		else L[i] =  T - L[i];
	} 

	sort(L.begin(), L.end());

	int ans = 0;
	REP(i,P){
		ans = max(ans, L[i]);
	}

	cout << ans << endl;
	return 0;

}

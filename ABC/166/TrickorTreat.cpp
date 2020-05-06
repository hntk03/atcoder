#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, K; cin >> N >> K;
	vector<int> d(K);
	bool has[101];

	REP(i,N) has[i] = false;

	REP(i, K){
		cin >> d[i];
		REP(j, d[i]){
			int A; cin >> A;
			has[A-1] = true;
		}
	}


	int ans = 0;
	REP(i,N) if(!has[i]) ans++;

	cout << ans << endl;


	return 0;

}

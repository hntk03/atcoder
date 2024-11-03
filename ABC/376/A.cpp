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

	int N, C; cin >> N >> C;
	vector<int> T(N);

	REP(i,N) cin >> T[i];

	int time = T.front() + C;
	int ans = 1;
	FOR(i,1,N){
		if(time <= T[i]){
			time = T[i] + C;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;

}

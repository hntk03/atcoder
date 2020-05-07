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

	int N; cin >> N;
	vector<int> a(N);

	REP(i,N) cin >> a[i];
	REP(i,N) a[i]--;


	int i = 0;
	int idx = 0;
	int ans = 0;
	while(i < N){
		if(idx == 1){
			cout << ans << endl;
			return 0;
		}
		idx = a[idx];
		ans++;
		i++;
	}

	cout << -1 << endl;

	return 0;

}

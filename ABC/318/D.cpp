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

	int N; cin >> N;	
	vector<vector<int>> d(N+1, vector<int>(N+1));

	REP(i,N){
		FOR(j,i+1,N){
			cin >> d[i][j];
			d[j][i] = d[i][j];
		}
	}

	if(N%2 == 1) N++;

	vector<bool> used(N);
	ll ans = 0;
	auto f = [&](auto f, ll w) -> void {
		ans = max(ans, w);
		int i = 0;
		while(i < N and used[i]) i++;
		if(i == N) return ;
		used[i] = true;
		FOR(j,i+1,N){
			if(used[j]) continue;
			used[j] = true;
			f(f, w+d[i][j]);
			used[j] = false;
		}
		used[i] = false;
	};

	f(f, 0);

	cout << ans << endl;

	return 0;

}

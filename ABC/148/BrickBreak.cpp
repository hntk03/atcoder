#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int t = 1;
	int ans = 0;
	REP(i,N){
		if(a[i] == t) t++;
		else ans++;
	}

	if(ans == N) ans = -1;
	
	cout << ans << endl;


	return 0;

}

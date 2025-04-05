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
	vector<int> A(N+1), B(N+1);

	FOR(i,2,N+1) cin >> A[i];
	FOR(i,3,N+1) cin >> B[i];

	vector<int> dp(N+1);
	dp[1] = 0;
	dp[2] = A[2];
	FOR(i,3,N+1) dp[i] = min(dp[i-1] + A[i], dp[i-2]+B[i]);

	int place = N;
	vector<int> ans;
	while(true){
		ans.push_back(place);
		if(place == 1) break;

		if(dp[place-1] + A[place] == dp[place]) place = place - 1;
		else place = place - 2;
	}

	reverse(ans.begin(), ans.end());

	cout << ans.size() << endl;
	REP(i,ans.size()){
		if(i >= 1) cout << " ";
		cout << ans[i];
	}
	cout << endl;

	return 0;

}

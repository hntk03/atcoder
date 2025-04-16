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
	string S; cin >> S;

	vector<int> one(N), two(N);

	int cnt = 0;
	REP(i,N){
		if(S[i] == '1') cnt++;
		else if(S[i] == '/'){
			one[i] = cnt;
			cnt = 0;
		}
		else if(S[i] == '2') cnt = 0;
	}

	cnt = 0;
	for(int i=N-1;i>=0;i--){
		if(S[i] == '2') cnt++;
		else if(S[i] == '/'){
			two[i] = cnt;
			cnt = 0;
		} 
		else if(S[i] == '1') cnt = 0;
	}

	int ans = 0;
	REP(i,N){
		if(S[i] == '/'){
			int cnt = min(one[i], two[i]);
			ans = max(ans, 2*cnt+1);
		}
	}

	cout << ans << endl;
	return 0;

}

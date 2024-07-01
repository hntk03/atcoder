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

	deque<int> ans = {N};

	for(int i=N-1; i>=0; i--){
		if(S[i] == 'L') ans.push_back(i);
		else ans.push_front(i);
	}

	REP(i,N+1) cout << ans[i] << " ";
	cout << endl;

	return 0;

}

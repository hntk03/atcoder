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

	int N, M; cin >> N >> M;
	set<int> st;
	REP(i,M){
		int A; cin >> A;
		st.insert(A);
	}

	vector<int> ans;
	FOR(i,1,N+1){
		if(st.count(i) == 0){
			ans.push_back(i);
		}
	}

	cout << ans.size() << endl;
	for(int x : ans) cout << x << " ";
	cout << endl;
	return 0;
}

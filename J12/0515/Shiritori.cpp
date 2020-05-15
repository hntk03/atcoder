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
	vector<string> W(N);

	REP(i,N) cin >> W[i];

	set<string> st;
	REP(i,N) st.insert(W[i]);

	bool shi = true;
	FOR(i,1,N){
		if(W[i-1].back() != W[i].front()) shi = false;
	}

	if(st.size() == N and shi) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

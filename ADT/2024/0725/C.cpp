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


	int N, K; cin >> N >> K;

	vector<pair<int, int>> A(N);
	REP(i,N){
		int a; cin >> a;
		A[i] = make_pair(a, i+1);
	}

	set<int> st;
	REP(i,K){
		int B; cin >> B;
		st.insert(B);
	}

	sort(A.begin(), A.end());

	int target = A.back().first;

	bool ans = false;
	REP(i,N){
		if(target != A[i].first) continue;
		if(st.count(A[i].second)) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

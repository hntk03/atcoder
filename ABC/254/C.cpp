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
	map<int, vector<int>> mp;
	
	vector<int> A(N);

	REP(i,N){
		cin >> A[i];
		mp[i%K].push_back(A[i]);
	}

	sort(A.begin(), A.end());

	REP(i,K){
		sort(mp[i].begin(), mp[i].end());
	}

	vector<int> re;
	REP(i,N){
		re.push_back(mp[i%K][i/K]);
	}

	bool ans = true;
	REP(i,N) if(A[i] != re[i]) ans = false;

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

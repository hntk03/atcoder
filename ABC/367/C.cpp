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
	vector<int> R(N);
	REP(i,N) cin >> R[i];
	
	vector<vector<int>> ans;
	auto dfs = [&](auto f, int i, vector<int>& A, int sum) -> void {
		if(i == N){
			if(sum%K == 0){
				ans.push_back(A);
			}
			return;
		}

		FOR(j,1,R[i]+1){
			A.push_back(j);
			f(f, i+1, A, sum+j);
			A.pop_back();
		}
	};

	vector<int> A;
	dfs(dfs, 0, A, 0);

	REP(i,ans.size()){
		for(int x:ans[i]){
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;

}

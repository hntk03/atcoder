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

	vector<vector<int>> ans(N);
	REP(i,N){
		REP(j,i){
			if(j == 0) ans[i].push_back(1);
			else ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
		}
		ans[i].push_back(1);
	}

	for(vector<int> v : ans){
		for(int x : v){
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;

}

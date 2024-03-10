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

vector<ll> A, B, C, X;

map<ll, bool> mp;

bool dfs(int i, ll sum){
	if(i == 0){
		REP(j, A.size()){
		 if(dfs(i+1, sum+A[j])) return true;
		}
	}else if(i == 1){
		REP(j, B.size()){
			if(dfs(i+1, sum+B[j])) return true;
		}
	}else if(i == 2){
		REP(j,C.size()){
			if(dfs(i+1, sum+C[j])) return true;
		}
	}else{
		mp[sum] = true;
	}

	return false;
}

int main(void){

	int N; cin >> N;
	REP(i, N){
		ll tmp; cin >> tmp;
		A.push_back(tmp);
	}

	int M; cin >> M;
	REP(i,M){
		ll tmp; cin >> tmp;
		B.push_back(tmp);
	}

	int L; cin >> L;
	REP(i,L){
		ll tmp; cin >> tmp;
		C.push_back(tmp);
	}

	int Q; cin >> Q;
	REP(i,Q){
		ll tmp; cin >> tmp;
		X.push_back(tmp);
	}

	dfs(0, 0);

	REP(i,Q){
		if(mp[X[i]]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;

}

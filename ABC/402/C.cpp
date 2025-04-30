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
	vector<int> K(M);
	vector<vector<int>> A(M);
	REP(i,M){
		cin >> K[i];
		REP(j,K[i]){
			int a; cin >> a;
			A[i].push_back(a);
		}
	}

	map<int, int> idx;
	REP(i,N){
		int B; cin >> B;
		idx[B] = i;
	}

	vector<int> imos(N+1);
	vector<set<int>> r(M);
	REP(i,M){
		for(int a : A[i]){
			r[i].insert(idx[a]);
		}

		int idxMax = *r[i].rbegin();
		imos[idxMax]++;
	}

	FOR(i,1,N) imos[i] += imos[i-1];
	REP(i,N) cout << imos[i] << endl;

	return 0;

}

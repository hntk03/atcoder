#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using namespace atcoder;

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
	dsu uf(N);
	vector<int> deg(N);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;

		if(uf.same(A, B)){
			cout << "No" << endl;
			return 0;
		}

		uf.merge(A, B);

		deg[A]++;
		deg[B]++;
	}

	REP(i,N){
		if(deg[i] > 2){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;

}

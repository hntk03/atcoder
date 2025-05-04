#include <bits/stdc++.h>
#include <atcoder/dsu>

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
	vector<ll> vertex(N);
	atcoder::dsu uf(N);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		vertex[A]++;
		vertex[B]++;
		uf.merge(A, B);
	}

	int cnt = 0;
	REP(i,N){
		if(vertex[i] == 2) cnt++;
	}

	bool ans = cnt == N and uf.size(0) == N;
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

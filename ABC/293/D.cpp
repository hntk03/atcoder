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

	int X = 0;

	REP(i,M){
		int A, C;
		char B, D; 
		cin >> A >> B >> C >> D;
		A--; C--;

		if(uf.same(A, C)){
			X++;
		}
		uf.merge(A, C);
	}

	int Y = uf.groups().size() - X;

	printf("%d %d\n", X, Y);

	return 0;

}

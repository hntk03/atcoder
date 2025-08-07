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
	map<int, int> A;

	REP(i,N){
		int a; cin >> a;
		A[a]++;
	}

	REP(i,M){
		int B; cin >> B;
		if(A[B] == 0) continue;
		else A[B]--;
	}
	
	for(auto [key, value] : A) REP(i,value) cout << key << " ";
	cout << endl;

	return 0;

}

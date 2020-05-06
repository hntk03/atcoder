#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;


int main(void){

	
// int N, M; 
// vector<int> H;
	// cin >> N >> M;
	// H = vector<int>(N);
	// REP(i,N) cin >> H[i];
	// vector<int> d(N);
	// vector<int> eq(N);
	// REP(i,N) d[i] = i;
	//
	// REP(i,M){
	// 	int A, B; cin >> A >> B;
	// 	A--; B--;
	// 	if(H[d[A]] < H[d[B]]) d[A] = B;
	// 	else if(H[d[B]] < H[d[A]]) d[B] = A;
	// 	else{
	// 		eq[A] = eq[B] = 1;
	// 	}
	//
	// }
	//
	//
	// int ans = 0;
	// REP(i,N) if(d[i] == i and eq[i] != 1) ans++;
	//
	// cout << ans << endl;
	
	int N, M; cin >> N >> M;
	vector<int> H(N);
	REP(i,N) cin >> H[i];
	int graph[100005][100005];

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		graph[A][B] = 1;
		graph[B][A] = 1;
	}

	int ans = 0;
	REP(i,N){
		REP(j,N){
			if(graph[i][j]) 

		}

	}

	


	return 0;

}

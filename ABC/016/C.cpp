#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<vector<bool>> G(N, vector<bool>(N, false));

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		G[A][B] = true;
		G[B][A] = true;
	}

	REP(i,N){
		int ans = 0;
		REP(j,N){
			if(G[i][j]){
				REP(k,N){
					if(i == k) continue; //自分自身
					if(G[i][k]) continue; //自分と友達か
					if(G[j][k]) ans++; //友達の友達
				}
			}
		}
		cout << ans << endl;
	}



	return 0;

}

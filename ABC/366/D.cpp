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

	vector<vector<vector<ll>>> A(N, vector<vector<ll>>(N, vector<ll>(N)));
	REP(x,N){
		REP(y,N){
			REP(z,N){
				cin >> A[x][y][z];
			}
		}
	}

	vector<vector<vector<ll>>> sum(N, vector<vector<ll>>(N+1, vector<ll>(N+1)));

	REP(x,N){
		REP(y,N){
			REP(z,N){
				sum[x][y+1][z+1] = sum[x][y][z+1] + sum[x][y+1][z] - sum[x][y][z] + A[x][y][z];
			}
		}
	}

	int Q; cin >> Q;
	vector<ll> ans;
	REP(i,Q){
		int Lx, Rx, Ly, Ry, Lz, Rz; cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;
		Lx--;
		Ly--; 
		Lz--; 

		ll hoge = 0;
		FOR(x,Lx,Rx){
			ll now = sum[x][Ry][Rz] - sum[x][Ly][Rz] - sum[x][Ry][Lz] + sum[x][Ly][Lz];
			hoge += now;
		}
		ans.push_back(hoge);
	}
	
	for(ll x : ans) cout << x << endl;

	return 0;

}

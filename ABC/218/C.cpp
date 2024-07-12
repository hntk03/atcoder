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
	vector<string> S(N), T(N);

	REP(i,N) cin >> S[i];
	REP(i,N) cin >> T[i];

	auto rot = [&](vector<string> a){
		vector<string> res(N, string(N, '.'));
		REP(i,N){
			REP(j,N){
				res[j][N-1-i] = a[i][j];
			}
		}
		return res;
	};


	auto normalize = [&](vector<string> a){
		int li = N, lj = N;
		REP(i,N){
			REP(j,N){
				if(a[i][j] == '#'){
					li = min(li, i);
					lj = min(lj, j);
				}
			}
		}
		vector<string> res(N, string(N, '.'));
		REP(i,N){
			REP(j,N){
				if(a[i][j] == '#'){
					res[i-li][j-lj] = '#';
				}
			}
		}
		return res;
	};

	auto same = [&](vector<string> a, vector<string> b){
		return normalize(a) == normalize(b);

	};

	REP(ri,4){
		if(same(S, T)){
			cout << "Yes" << endl;
			return 0;
		}
		T = rot(T);
	}

	cout << "No" << endl;
	return 0;

}

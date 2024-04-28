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

	vector<int> A(M);
	REP(i,M) cin >> A[i];

	vector<string> S(N);
	REP(i,N) cin >> S[i];

	vector<int> point(N);
	REP(i,N){
		REP(j,M){
			if(S[i][j] == 'x') continue;
			else point[i] += A[j];
		}
		point[i] += i+1;
	}


	REP(i,N){
		int maxValue = 0;
		REP(j,N) if(i != j) maxValue = max(maxValue, point[j]);

		vector<pair<int, char> > r(M);
		REP(j,M) r[j] = make_pair(A[j], S[i][j]);

		sort(r.begin(), r.end());
		reverse(r.begin(), r.end());

		int p = point[i];
		int ans = 0;
		REP(j,M){

			if(p <= maxValue and r[j].second == 'x'){
				ans++;
				p += r[j].first;
			}
		}
		cout << ans << endl;
	}


	return 0;

}

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
	vector<int> P(N);
	REP(i,N) cin >> P[i];

	for(int i = N-2;i>=0;i--){
		if(P[i] > P[i+1]){
			int j = N - 1;
			while(P[i] < P[j]) --j;
			swap(P[i], P[j]);
			reverse(P.begin()+(i+1), P.end());
			break;
		}
	}

	REP(i,N) cout << P[i] << " ";
	cout << endl;

	return 0;

}

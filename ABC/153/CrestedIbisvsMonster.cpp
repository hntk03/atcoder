#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


const int INF = 1010101100;

int main(void){

	int H, N; cin >> H >> N;
	vector<int> A(N);
	vector<int> B(N);
	REP(i,N) cin >> A[i] >> B[i];

	vector<int> HP(H+1, INF);

	HP[H] = 0;

	for(int i=H;i>=0;i--){
		REP(j,N){
			int idx = i - A[j];
			idx = max(idx, 0);
			HP[idx] = min(HP[idx], HP[i] + B[j]);
		}
	}

	cout << HP[0] << endl;
	return 0;

}

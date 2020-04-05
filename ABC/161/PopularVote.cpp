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
	vector<int> A(N);

	int sum = 0;
	REP(i,N){
		cin >> A[i];
		sum += A[i];
	}	

	SORT(A);
	double boder = sum / (4.0*M);

	int cnt = 0;
	REP(i,N){
		if(A[N-i-1] >= boder) cnt++;
	}
	
	if(cnt >= M) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}

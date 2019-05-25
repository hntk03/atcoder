#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	long long int N, M; cin >> N >> M;
	vector<long long int> A(N);
	vector<long long int> B(M);
	vector<long long int> C(M);
	vector<long long int> sum(N+1, 0);

	REP(i,N){
		cin >> A[i];
	}
	SORT(A);
	FOR(i,1,N+1){
		sum[i] = sum[i-1] + A[i-1];
	}

	REP(i,M) cin >> B[i] >> C[i];


	long long int ans = sum[N];
	REP(i,M){
		long long int idx = B[i];
		if(sum[idx] < idx*C[i]){
			ans -= sum[idx];
			ans += idx*C[i];
			sum[idx] = idx*C[i];
		}
	}

	cout << ans << endl;

	return 0;

}

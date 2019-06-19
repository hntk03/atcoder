#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int N;
const int MAX = 100001;
int A[MAX] = {0};
int B[MAX] = {0};
int C[MAX] = {0};

int main(void){


	cin >> N;
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];
	REP(i,N) cin >> C[i];

	sort(A,A+N);
	sort(B,B+N);
	sort(C,C+N);

	long long int ans = 0;
	REP(i,N){
		long long a = lower_bound(A, A+N, B[i]) - A;
		long long c = N - (upper_bound(C, C+N, B[i]) - C);
		ans += a*c;
	}

	cout << ans << endl;


	return 0;

}

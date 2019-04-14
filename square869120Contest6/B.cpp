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

	int N; cin >> N;
	vector<long long> A(N);
	vector<long long> B(N);
	REP(i,N) cin >> A[i] >> B[i];

	long long sum_a = 0;
	long long sum_b = 0;
	REP(i,N){
		sum_a += A[i];
		sum_b += B[i];
	}

	long long ave_a = sum_a / N;
	long long ave_b = sum_b / N;
	cout << ave_a << ave_b << endl;

	long long ans = 0;
	REP(i,N){
		ans += abs(ave_a-A[i]);
		ans += abs(A[i]-B[i]);
		ans += abs(ave_b-B[i]);
	}

	cout << ans << endl;


	return 0;

}

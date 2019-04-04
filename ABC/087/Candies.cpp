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
	vector<int> a(N);
	vector<int> b(N);
	REP(i,N) cin >> a[i];
	REP(i,N) cin >> b[i];

	vector<int> sum_a(N+1,0);
	vector<int> sum_b(N+1,0);
	
	FOR(i,1,N+1){
		sum_a[i] = sum_a[i-1] + a[i-1];
		sum_b[i] = sum_b[i-1] + b[i-1];
	}

	int ans = -1;
	REP(i,N){
		ans = max(ans, sum_a[i+1] + (sum_b[N]-sum_b[i]));
	}

	cout << ans << endl;
	return 0;

}

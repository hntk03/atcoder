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
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	
	vector<int> sum(N+1,0);
	REP(i,N){
		sum[i+1] = sum[i] + A[i];
	}
	
	map<int, int> m;
	REP(i,N+1){
		m[sum[i]]++;
	}

	int ans = 0;
	for(auto v:m){
		ans += (v.second*(v.second-1))/2;
	}

	cout << ans << endl;


	return 0;

}

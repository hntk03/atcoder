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

	int N, M; cin >> N >> M;
	vector<int> X(M);
	REP(i,M) cin >> X[i];

	SORT(X);
	
	vector<int> v(M-1);
	REP(i,M-1) v[i] = X[i+1]-X[i];
	SORT(v);

	int ans = 0;
	REP(i,M-N){
		ans += v[i];
	}

	cout << ans << endl;

	return 0;

}

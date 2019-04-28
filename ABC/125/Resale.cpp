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
	vector<int> V(N);
	vector<int> C(N);

	REP(i,N) cin >> V[i];
	REP(i,N) cin >> C[i];

	int ans = 0;
	REP(i,N){
		if(V[i] > C[i]) ans += (V[i]-C[i]);
	}

	cout << ans << endl;



	return 0;

}

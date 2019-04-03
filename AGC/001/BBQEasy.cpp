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
	vector<int> L(2*N);
	REP(i,2*N) cin >> L[i];
	SORT(L);

	int ans = 0;
	REP(i,2*N){
		if(i % 2 == 0) ans += L[i];
	}

	cout << ans << endl;
	return 0;

}

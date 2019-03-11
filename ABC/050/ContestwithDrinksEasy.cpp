#include <stdio.h>
#include <cmath>
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

	vector<int> T(N);
	int sum = 0;
	REP(i,N){ 
		cin >> T[i];
		sum += T[i];
	}

	int M; cin >> M;
	vector<int> ans(M,0);
	REP(i,M){
		int P, X; cin >> P >> X;
		ans[i] = sum - T[P-1];
		ans[i] += X;
	}


	REP(i,M) cout << ans[i] << endl;


	return 0;

}

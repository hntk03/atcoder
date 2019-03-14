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
	vector<string> blue(N);
	REP(i,N) cin >> blue[i];
	int M; cin >> M;
	vector<string> red(M);
	REP(i,M) cin >> red[i];

	int ans = 0;
	REP(i,N){
		int p = 0;
		REP(j,N){
			if(blue[i] == blue[j]) p++;
		}
		REP(j,M){
			if(blue[i] == red[j]) p--;
		}
		ans = max(ans, p);
	}
	
	cout << ans << endl;


	return 0;

}

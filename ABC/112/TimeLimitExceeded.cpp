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

	int N, T; cin >> N >> T;
	
	int ans = 1 << 30;
	REP(i,N){
		int c, t; cin >> c >> t;
		if(t<=T) ans = min(ans, c);
	}

	if(ans == (1 << 30)) cout << "TLE" << endl;
	else cout << ans << endl;

	return 0;

}

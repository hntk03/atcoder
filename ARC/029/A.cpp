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
	VI t(N);
	REP(i,N) cin >> t[i];

	int C = 1 << N;
	int ans = 1 << 30;
	REP(i,C){
		bitset<4> bs(i);
		int a = 0, b = 0;
		REP(j,N){
			if(bs[j] == true) a += t[j];
			if(bs[j] == false) b += t[j];
		}
		ans = min(ans, max(a, b));
	}

	cout << ans << endl;
	return 0;

}

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

	int N, K; cin >> N >> K;
	// vector<int> x(N);
	int ans = 0;
	REP(i,N){
		// cin >> x[i];
		int x;
		cin >> x;
		ans += min(abs(K-x)*2, abs(0-x)*2);
	}

	cout << ans << endl;

	


	return 0;

}

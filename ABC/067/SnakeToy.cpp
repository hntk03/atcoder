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

	vector<int> l(N);
	REP(i,N) cin >> l[i];

	SORT(l);
	int ans = 0;
	for(int i=N-1;i>N-K-1;--i) ans += l[i];

	cout << ans << endl;


	return 0;

}

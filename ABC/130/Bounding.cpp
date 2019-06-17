#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, X; cin >> N >> X;
	vector<int> L(N);
	vector<int> D(N, 0);
	REP(i,N) cin >> L[i];

	int ans = 1;
	FOR(i,1,N+1){
		int d = D[i-1] + L[i-1];
		D[i] = d;
		if(d <= X) ans++;
	}
	
	cout << ans << endl;


	return 0;

}

#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, K; cin >> N >> K;

	int ans = 0;
	if(K == 1) ans = 0;
	else{
		ans = N-(K-1) - 1;

	}
		
	cout << ans << endl;


	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;

	int cnt = 0;
	FOR(i,1,N+1){
		if(i %2 == 1) cnt++;
	}

	double ans = (double)cnt / N;
	cout << ans << endl;

	return 0;

}

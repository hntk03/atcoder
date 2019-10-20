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
	vector<int> L(N);

	REP(i,N) cin >> L[i];

	SORT(L);

	ll cnt = 0;
	REP(i,N-2){
		if(L[i]+L[i+1] > L[i+2]) cnt++;
	}

	cout << cnt << endl;



	return 0;

}

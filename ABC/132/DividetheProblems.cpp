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
	vector<int> d(N);
	REP(i,N) cin >> d[i];

	SORT(d);

	int l = N/2-1;
	int r = N/2;
	cout << d[r]-d[l] << endl;


	return 0;

}

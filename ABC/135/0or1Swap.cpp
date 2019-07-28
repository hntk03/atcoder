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
	vector<int> p(N);
	REP(i,N) cin >> p[i];

	bool flag = false;
	int cnt = 0;
	REP(i,N){
		if(i+1 != p[i]) cnt++;
	}

	if(cnt < 3) cout << "YES" << endl;
	else cout << "NO" << endl;



	return 0;

}

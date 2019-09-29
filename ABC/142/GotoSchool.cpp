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
	vector<pair<int, int>> v(N);
	REP(i,N){
		int A; cin >> A;
		v[i] = make_pair(A, i+1);
	}
	
	SORT(v);

	REP(i,N-1) cout << v[i].second << ' ';
	cout << v.back().second << endl;



	return 0;

}

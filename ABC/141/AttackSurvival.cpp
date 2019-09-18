#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, K, Q; cin >> N >> K >> Q;

	vector<int> p(N);
	REP(i,Q){
		int A; cin >> A;
		p[--A]++;
	}
	
	int ans = 0;
	REP(i,N){
		if(p[i] + K > Q) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;

}

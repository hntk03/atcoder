#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int A, B; cin >> A >> B;
	REP(i,1200){
		int C = (int)(i*0.08);
		int D = (int)(i*0.1);
		if(A == C and D == B){
			cout << i << endl;
			return 0;
		}

	}


	cout << -1 << endl;
	return 0;

}

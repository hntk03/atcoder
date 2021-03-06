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

	int N; cin >> N;
	vector<int> A(N);

	REP(i,N) cin >> A[i];

	bool flag = true;
	REP(i, N){
		if(A[i] % 2 == 0){
			if(A[i] % 3 == 0 or A[i] % 5 == 0) continue;
			flag = false;
		}
	}
	
	if(flag) cout << "APPROVED" << endl;
	else cout << "DENIED" << endl;


	return 0;

}

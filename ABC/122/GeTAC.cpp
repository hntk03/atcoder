#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, Q; cin >> N >> Q;
	string S; cin >> S;
	vector<int> l(Q);
	vector<int> r(Q);
	REP(i,Q){
		cin >> l[i] >> r[i];
	}

	vector<int> sum(N+1, 0);
	FOR(i,1,N){
		sum[i+1] = sum[i];
		if(S[i-1] == 'A' and S[i] == 'C') sum[i+1]++;
	}

	REP(i,Q){
		int ans = sum[r[i]] - sum[l[i]];
		cout << ans << endl;
	}


	return 0;

}

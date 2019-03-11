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

	int N, M; cin >> N >> M;

	vector<string> A(N);
	vector<string> B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];

	int diff = N - M;

	REP(i,diff){
		REP(j,diff){
			int cnt = 0;
			REP(k,M){
				if(A[k+i].substr(j,M) == B[k+i]) cnt++;
			}
			if(cnt == M){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;

}

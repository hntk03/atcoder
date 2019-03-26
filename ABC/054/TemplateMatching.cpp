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

	REP(i,N-M+1){
		REP(j,N-M+1){

			bool ans = true;
			REP(k,M){
				if(A[k+i].substr(j,M) != B[k]) ans = false;
			}

			if(ans == true){
				cout << "Yes" << endl;
				return 0;
			}


		}
	}

	cout << "No" << endl;
	return 0;

}

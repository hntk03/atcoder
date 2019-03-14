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

	int N, M, X; cin >> N >> M >> X;
	vector<int> A(M);
	REP(i,M) cin >> A[i];


	int L = 0;
	int R = 0;
	REP(i,M){
		if(A[i] < X) L++;
		else R++;
	}
	
	int ans = min(L,R);
	cout << ans << endl;


	return 0;

}

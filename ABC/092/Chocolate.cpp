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

	int N, D, X; cin >> N;
	cin >> D >> X;
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	
	int ans = X;
	REP(i,N){
		int day = 1;
		int cnt = 1;
		while(day <= D){
			day = cnt*A[i]+1;
			cnt++;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;

}

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

#define MAX 2000001


int main(void){

	int N, T; cin >> N >> T;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int ans = 0;
	FOR(i,1,N){
		if(A[i] - A[i-1] > T){
			ans += T;
		}else{
			ans += A[i] - A[i-1];
		}
	}
	ans += T;
	cout << ans << endl;


	return 0;

}

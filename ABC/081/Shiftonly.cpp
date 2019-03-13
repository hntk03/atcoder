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

bool check(vector<int> A){

	REP(i,A.size()){
		if(A[i]%2 != 0) return false;
	}

	return true;
}


int main(void){

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int ans = 0;
	while(1){
		if(check(A) == true){
			REP(i,N) A[i] /= 2;
			ans++;

		}else{
			break;
		}
	}

	cout << ans << endl;

	return 0;

}

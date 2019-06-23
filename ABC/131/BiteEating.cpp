#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, L; cin >> N >> L;

	int S = 0;
	REP(i,N) S += L + i;

	int min_value = 1 << 30;
	int ans = 0;
	REP(i,N){
		int sum = 0;
		REP(j,N){
			if(i == j) continue;
			else sum += L + j;
		}
		if(abs(S-sum) < min_value){
			ans = sum;
			min_value = abs(S-sum);
		}
	}

	cout << ans << endl;

	return 0;

}

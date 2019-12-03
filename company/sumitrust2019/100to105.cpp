#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int X;
const int N = 6;
const int M = 100000;
vector<bool> dp(M, false);
vector<int> value = {100, 101, 102, 103, 104, 105};

bool check(int i){
	bool tmp = false;
	REP(j,N){
		if(dp[i-value[j]]) tmp = true;
	}
	return tmp;
}

int main(void){

	cin >> X;

	dp[0] = true;
	REP(i,N) dp[value[i]] = true;

	FOR(i,106,X+1){
		if(check(i)) dp[i] = true;
	}

	if(dp[X]) cout << 1 << endl;
	else cout << 0 << endl;

	


	return 0;

}

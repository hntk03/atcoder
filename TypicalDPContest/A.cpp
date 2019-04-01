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

	int N; cin >> N;
	vector<int> p(N);
	REP(i,N) cin >> p[i];

	vector<bool> dp(10001, false);

	// dpの要素は得点，その得点がありえるか
	dp[0] = true;

	REP(i,N){
		for(int j = 10000;j >= 0;--j){
			if(dp[j] == true){
				dp[j+p[i]] = true;
			}
		}
	}

	int ans = 0;
	ans = count(dp.begin(), dp.end(), true);

	cout << ans << endl;

	return 0;

}

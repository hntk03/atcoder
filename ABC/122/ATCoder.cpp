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

	string S; cin >> S;

	string T = "ATCG";

	int ans = 0;

	int now = 0;
	REP(i,S.length()){
		bool isATCG = false;
		REP(j,T.length()){
			if(S[i] == T[j]) isATCG = true;
		}

		if(!isATCG){
			now = 0;
		}else{
			now++;
			ans = max(now, ans);
		}

	}

	cout << ans << endl;


	return 0;

}

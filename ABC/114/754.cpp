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

	int N = S.length();
	int ans = 1 << 30;
	REP(i,N-2){
		ans = min(ans, abs(753-stoi(S.substr(i,3))));
	}

	cout << ans << endl;

	return 0;

}

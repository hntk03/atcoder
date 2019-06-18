#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string S; cin >> S;

	char buffer = S[0];

	int section = 1;
	FOR(i,1,S.length()){
		if(buffer != S[i]){
			section++;
			buffer = S[i];
		}
	}

	int ans = section - 1;
	cout << ans << endl;

	return 0;

}

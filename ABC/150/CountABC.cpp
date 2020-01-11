#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	string S; cin >> S;

	int ans = 0;
	REP(i,N-2){
		if(S.substr(i,3) == "ABC") ans++;
	}
	
	cout << ans << endl;


	return 0;

}

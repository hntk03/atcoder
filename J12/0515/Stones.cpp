#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	string S; cin >> S;

	int black = count(S.begin(), S.end(), '#');
	int white = count(S.begin(), S.end(), '.');

	int b = 0;
	int w = white;
	int ans = white;
	REP(i,N-1){
		if(S[i] == '#') b++;
		else w++;
		ans = min(ans, b + (white - w));
	}


	cout << ans << endl;
	return 0;

}

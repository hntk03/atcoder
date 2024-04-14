#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	string T; cin >> T;

	int cnt = 0;
	REP(i,S.length()){
		if(cnt == 3) break;
		char big = S[i] - 'a' + 'A';
		if(big == T[cnt]){
			cnt++;
		}
	}

	if(cnt == 3) cout << "Yes" << endl;
	else if(cnt == 2 and T.back() == 'X') cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

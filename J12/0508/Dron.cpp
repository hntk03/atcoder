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

	string S; cin >> S;
	int T; cin >> T;

	int x = 0, y = 0;
	int cnt = 0;
	REP(i,S.length()){
		if(S[i] == '?') cnt++;
		else if(S[i] == 'L') x -= 1;
		else if(S[i] == 'R') x += 1;
		else if(S[i] == 'U') y += 1;
		else if(S[i] == 'D') y -= 1;
	}

	x = abs(x);
	y = abs(y);

	if(T == 1){
		//max
		cout << x + y + cnt << endl;

	}else if(T == 2){
		//min
		
		int m = x + y - cnt;
		if(m >= 0) cout << m << endl;
		else{
			cnt = -m;
			if(cnt % 2 == 0) cout << 0 << endl;
			if(cnt % 2 == 1) cout << 1 << endl;
		}

	}



	return 0;

}

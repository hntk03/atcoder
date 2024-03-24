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

	int W, B; cin >> W >> B;	
	string temp = "wbwbwwbwbwbw";
	string S;

	REP(i,100) S += temp;

	bool ans = false;
	REP(i,S.length()-(W+B)-1){
		string now = S.substr(i, W+B);
		int w = count(now.begin(), now.end(), 'w');
		int b = count(now.begin(), now.end(), 'b');

		if(W == w and B == b) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

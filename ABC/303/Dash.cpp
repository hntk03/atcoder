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

	long N, M, H, K; cin >> N >> M >> H >> K;
	string S; cin >> S;
	map<string, bool> item;

	REP(i,M){
		int x, y; cin >> x >> y;
		string cood = to_string(x) + ',' + to_string(y);
		item[cood] = true;
	}

	long x, y;
	x = y = 0;
	bool ans = true;

	REP(i,N){
		if(S[i] == 'R') x++;
		else if(S[i] == 'L') x--;
		else if(S[i] == 'U') y++;
		else y--;

		H--;
		if(H < 0){
			ans = false;
			break;
		}

		string cood = to_string(x) + ',' + to_string(y);
		if(item[cood]){
			if(H < K){
				H = K;
				item[cood] = false;
			}
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

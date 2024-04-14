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

	int H, W; cin >> H >> W;	
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	REP(i,H){
		REP(j,W-1){
			if(S[i][j] == 'T' and S[i][j+1] == 'T'){
				S[i][j] = 'P';
				S[i][j+1] = 'C';
				j++;
			}
		}

		cout << S[i] << endl;
	}

	return 0;

}

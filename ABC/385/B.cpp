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
	
	int H, W, X, Y; cin >> H >> W >> X >> Y;
	X--; Y--;

	vector<string> S(H);
	REP(i,H) cin >> S[i];

	string T; cin >> T;

	set<pair<int, int>> st;
	int ans = 0;

	for(char c : T){
		int nX = X, nY = Y;
		if(c == 'U') nX--;
		else if(c == 'D') nX++;
		else if(c == 'L') nY--;
		else nY++;

		if(S[nX][nY] == '#') continue;
		if(nX < 0 or nX == H or nY < 0 or nY == W) continue;

		X = nX, Y = nY;

		if(S[X][Y] == '@'){
			if(st.count(make_pair(X, Y)) == 0){
				st.insert(make_pair(X, Y));
				ans++;
			}else{
			}
		}
	}

	X++;
	Y++;
	cout << X << " " << Y << " " << ans << endl;

	return 0;

}

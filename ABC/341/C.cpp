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

int H, W, N;
string T; 
vector<string> S;

bool search(int i, int j, int n){
	if(i == 0 or j == 0) return false;
	if(i == H or j == W) return false;
	if(S[i][j] == '#') return false;
	if(n == N) return true;

	if(T[n] == 'L') return search(i, j-1, n+1);
	else if(T[n] == 'R') return search(i, j+1, n+1);
	else if(T[n] == 'U') return search(i-1, j, n+1);
	else if(T[n] == 'D') return search(i+1, j, n+1);

}

int main(void){

	cin >> H >> W >> N;
	cin >> T;

	REP(i,H){
		string tmp; cin >> tmp;
		S.push_back(tmp);
	}

	int ans = 0;
	FOR(i,1,H-1){
		FOR(j,1,W-1){
			if(search(i,j,0)) ans++;
		}
	}

	cout << ans << endl;

	return 0;

}


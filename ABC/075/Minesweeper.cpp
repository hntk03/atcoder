#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int H, W; cin >> H >> W;
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	vector<int> dx{1,1,0,-1,-1,-1,0,1};
	vector<int> dy{0,1,1,1,0,-1,-1,-1};

	REP(i,H){
		REP(j,W){
			int cnt = 0;
			REP(k,8){
				int y = j + dy[k];
				int x = i + dx[k];
				if(x >= 0 and x < H and y >= 0 and y < W and S[x][y] == '#') cnt++;
			}
			if(S[i][j] == '.') S[i][j] = '0' + cnt;
		}
	}

	REP(i,H) cout << S[i] << endl;


	return 0;

}

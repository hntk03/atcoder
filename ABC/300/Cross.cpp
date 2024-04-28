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

bool index(int h, int w, int H, int W){
	if(h < 0 or w < 0 or h >= H or w >= W) return false;
	else return true;
}

int main(void){

	int H, W; cin >> H >> W;	
	int N = min(H, W);

	vector<string> C(H);
	REP(i,H) cin >> C[i];

	map<int, int> mp;


	REP(h,H){
		REP(w,W){
			if(C[h][w] == '.') continue;

			int cnt = 0;
			FOR(j,1,N+1){
				bool leftdown = index(h+j, w-j, H, W) and C[h+j][w-j] == '#';
				bool leftup = index(h-j, w-j, H, W) and C[h-j][w-j] == '#';
				bool rightup = index(h-j, w+j, H, W) and C[h-j][w+j] == '#';
				bool rightdown = index(h+j, w+j, H, W) and C[h+j][w+j] == '#';

				if(leftdown and leftup and rightdown and rightup) cnt++;
				else break;
			}

			mp[cnt]++;
		}
	}

	FOR(i,1,N+1){
		cout << mp[i] << " ";
	}
	cout << endl;

	return 0;

}

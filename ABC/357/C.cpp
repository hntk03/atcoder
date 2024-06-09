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

void fillWhite(int h, int w, int l, vector<string>& S){

	int size = pow(3, l-1);

	FOR(i, h, h+size){
		FOR(j, w, w+size){
			S[i][j] = '.';
		}
	}
}

void level(int h, int w, int l, vector<string>& S){
	if(l == 0){
		S[h][w] = '#';
		return;
	}

	REP(i,3){
		int _h = pow(3, l-1) * i + h;
		REP(j,3){
			int _w = pow(3, l-1) * j + w;

			if(i == 1 and j == 1){
				fillWhite(_h, _w, l, S);
				continue;
			}

			level(_h, _w, l-1, S);
		}
	}
}

int main(void){

	int N; cin >> N;

	int size = pow(3, N);
	vector<string> S(size);
	REP(i,size) S[i].resize(size);

	level(0, 0, N, S);

	REP(i,size) cout << S[i] << endl;

	return 0;

}

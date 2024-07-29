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
	int Si, Sj; cin >> Si >> Sj;

	vector<string> C(H);
	REP(i,H) cin >> C[i];
	string X; cin >> X;

	auto ok = [&](int i, int j) -> bool{
		return (i >= 0 and j >= 0 and i < H and j< W);
	};

	Si--;
	Sj--;

	for(char c : X){
		if(c == 'L'){
			if(ok(Si, Sj-1) and C[Si][Sj-1] == '.'){
				Sj--;
			}
		}else if(c == 'R'){
			if(ok(Si, Sj+1) and C[Si][Sj+1] == '.'){
				Sj++;
			}
		}else if(c == 'U'){
			if(ok(Si-1,Sj) and C[Si-1][Sj] == '.'){
				Si--;
			}
		}else{
			if(ok(Si+1, Sj) and C[Si+1][Sj] == '.'){
				Si++;
			}
		}
	}
	Si++;
	Sj++;
	
	cout << Si << " " << Sj << endl;

	return 0;

}

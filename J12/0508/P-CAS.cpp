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

	int x, y; 
	string w;
	cin >> x >> y >> w;
	x--;
	y--;
	vector<string> c(9);
	REP(i, 9){
		string s; cin >> s;
		c[i] = s;
	}



	string ans;
	ans += c[y][x];

	REP(i,3){
		if(w == "R"){
			x++;
			if(x > 8){
				x -= 2;
				w = "L";
			}
		}else if(w == "L"){
			x--;
			if(x < 0){
				x += 2;
				w = "R";
			}
		}else if(w == "U"){
			y--;
			if(y < 0){
				y += 2;
				w = "D";
			}
		}else if(w == "D"){
			y++;
			if(y > 8){
				y -= 2;
				w = "U";
			}
		}else if(w == "RU"){
			x++;
			y--;
			if(x > 8 or y < 0){
				x -= 2;
				y += 2;
				w = "LU";
			}
		}else if(w == "RD"){
			x++;
			y++;
			if(x > 8 or y > 8){
				x -= 2;
				y -= 2;
				w = "LD";
			}
		}else if(w == "LU"){
			x--;
			y--;
			if(x < 0 or y < 0){
				x += 2;
				y += 2;
				w = "RU";
			}
		}else if(w == "LD"){
			x--;
			y++;
			if(x < 0 or y > 8){
				x += 2;
				y -= 2;
				w = "LU";
			}
		}
		ans += c[y][x];
	}


	cout << ans << endl;


	return 0;

}

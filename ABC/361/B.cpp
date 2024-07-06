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

void solve1(){

	int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
	int g, h, i, j, k, l; cin >> g >> h >> i >> j >> k >> l;

	bool xz = false;
	FOR(x,a,d+1){
		FOR(z,c,f+1){
			if(g < x and x < j and i < z and z < l) xz = true;
		}
	}

	bool xy = false;
	FOR(x,a,d+1){
		FOR(y,b,e+1){
			if(g < x and x < j and h < y and y < k) xy = true;
		}
	}

	bool yz = false;
	FOR(y,b,e+1){
		FOR(z,c,f+1){
			if(h < y and y < k and i < z and z < l) yz = true;
		}
	}

	if(xz and xy and yz) cout << "Yes" << endl;
	else cout << "No" << endl;

}

struct Point{
	int x, y, z;
};

Point input(){
	Point p;
	cin >> p.x >> p.y >> p.z;
	return p;
}

bool f(){

	Point l1 = input();
	Point r1 = input();
	Point l2 = input();
	Point r2 = input();

	if(r1.x <= l2.x) return false;
	if(r2.x <= l1.x) return false;
	if(r1.y <= l2.y) return false;
	if(r2.y <= l1.y) return false;
	if(r1.z <= l2.z) return false;
	if(r2.z <= l1.z) return false;

	return true;
}

void solve2(){

	if(f()) cout << "Yes" << endl;
	else cout << "No" << endl;
}


int main(void){

	// solve1();
	solve2();

	return 0;

}

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

struct V{
	int x, y;
	V(int x = 0, int y = 0): x(x), y(y){};
	int cross(const V& a) const{
		return x*a.y - y*a.x;
	}

	int ccw(const V& a) const{
		int area = cross(a);
		if(area > 0) return +1; // ccw
		if(area < 0) return -1; // cw
    return 0; // colinear
	}

	V operator-(const V& a) const{
		return V(x-a.x, y-a.y);
	}
};

int main(void){

	vector<V > p(4);
	REP(i,4) cin >> p[i].x >> p[i].y;

	REP(i,4){
		V A = p[i];
		V B = p[(i+1)%4];
		V C = p[(i+2)%4];
		V b = B-A, c = C-A;

		if(b.ccw(c) != 1){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;

}

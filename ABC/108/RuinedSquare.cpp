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

	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int x = x2;
	int y = y2;
	int dx = x2 - x1;
	int dy = y2 - y1;

	REP(i,2){
		swap(dx,dy);
		dx = -dx;
		x += dx;
		y += dy;
		if(i == 0) cout << x << ' ' << y << ' ';
		if(i == 1) cout << x << ' ' << y << endl;;
	}

	return 0;

}

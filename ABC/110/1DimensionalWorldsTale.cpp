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

	int N, M, X, Y; cin >> N >> M >> X >> Y;

	int x_max = -1;
	REP(i,N){
		int x; cin >> x;
		x_max = max(x_max, x);
	}

	int y_min = 1 << 30;
	REP(i,M){
		int y; cin >> y;
		y_min = min(y_min, y);
	}
	if(x_max < y_min and X < x_max+1 and Y >= x_max+1) cout << "No War" << endl;
	else cout << "War" << endl;

	return 0;

}

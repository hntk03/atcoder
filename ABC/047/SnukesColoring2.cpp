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

	int W, H, N; cin >> W >> H >> N;
	int x, y;
	x = y = 0;

	REP(i,N){
		int xi, yi, ai; cin >> xi >> yi >> ai;
		switch(ai){
			case 1:
				x = max(x, xi);
				break;
			case 2:
				W = min(W, xi);
				break;
			case 3:
				y = max(y, yi);
				break;
			case 4:
				H = min(H, yi);
				break;
		}

	}

	int dx = max(0, W-x);
	int dy = max(0, H-y);

	cout << dx*dy << endl;


	return 0;

}

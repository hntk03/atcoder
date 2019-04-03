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

	vector<vector<int>>	c(3, vector<int>(3));
	REP(i,3) REP(j,3) cin >> c[i][j];

	vector<int> x(3);
	vector<int> y(3);

	x[0] = 0;
	REP(i,3){
		y[i] = c[0][i] - x[0];
	}

	REP(i,3){
		x[i] = c[i][0] - y[0];
	}

	bool ans = true;
	REP(i,3){
		REP(j,3){
			if(c[i][j] != x[i]+y[j]) ans = false;
		}
	}

	cout << (ans ? "Yes" : "No") << endl;



	return 0;

}

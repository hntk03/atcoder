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
	int x3, y3, x4, y4;

	y3 = y2;
	y4 = y1;
	int d = abs(y2-y1);
	x3 = x1 - d;
	x4 = x1 - d;

	cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << endl;


	return 0;

}

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

	int H, W; cin >> H >> W;
	vector<string> a(H);
	REP(i,H) cin >> a[i];

	REP(i,W+2) cout << '#';
	cout << endl;

	REP(i,H){
		a[i] = '#' + a[i] + '#';
		cout << a[i] << endl;
	}

	REP(i,W+2) cout << '#';
	cout << endl;


	return 0;

}

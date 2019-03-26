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

	string S; cin >> S;
	int T; cin >> T;
	int x,y;
	x = y = 0;
	int cnt = 0;
	REP(i,S.length()){
		switch(S[i]){
			case 'L':
				x--;
				break;
			case 'R':
				x++;
				break;
			case 'U':
				y++;
				break;
			case 'D':
				y--;
				break;
			case '?':
				cnt++;
				break;
		}
	}

	int dist = abs(x) + abs(y);
	if(T == 1) dist += cnt;
	else{
		dist -= cnt;
		if(dist < 0) dist &= 1;
	}

	cout << dist << endl;

	return 0;

}

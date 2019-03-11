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

	int H, W; scanf("%d %d", &H, &W);

	vector<string> C(H);
	REP(i,H){
		cin >> C[i];
	}

	REP(i,H){
		REP(j,2){
			cout << C[i] << endl;
		}
	}
	


	return 0;

}

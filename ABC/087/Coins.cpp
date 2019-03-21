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

	int A, B, C, X; cin >> A >> B >> C >> X;

	int ans = 0;
	REP(i,A+1){
		REP(j,B+1){
			REP(k,C+1){
				if(500*i+100*j+50*k == X) ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}

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

	int X; cin >> X;
	int ans = 1;
	FOR(b,2,X+1){
		int power = b * b;
		for(int p=2;;++p){
			if(power > X) break;
			ans = max(ans, power);
			power *= b;
		}
	}

	cout << ans << endl;

	return 0;

}

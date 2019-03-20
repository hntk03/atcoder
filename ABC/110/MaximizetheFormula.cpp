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

	VI v(3);
	REP(i,3) cin >> v[i];
	SORT(v);

	int ans = v[2]*10+v[1]+v[0];
	cout << ans << endl;

	return 0;

}

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

	int a, b; cin >> a >> b;
	int ans = 0;
	FOR(i,1,b-a+1){
		ans += i;
	}
	ans -= b;

	cout << ans << endl;

	return 0;

}

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

	string s; cin >> s;
	int ans = 700;
	if(s[0] == 'o') ans += 100;
	if(s[1] == 'o') ans += 100;
	if(s[2] == 'o') ans += 100;

	cout << ans << endl;

	return 0;

}

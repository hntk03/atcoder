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
	if(s[0] == '9') s[0] = '1';
	else if(s[0] == '1') s[0] = '9';
	
	if(s[1] == '9') s[1] = '1';
	else if(s[1] == '1') s[1] = '9';

	if(s[2] == '9') s[2] = '1';
	else if(s[2] == '1') s[2] = '9';

	cout << s << endl;

	return 0;

}

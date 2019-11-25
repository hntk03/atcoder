#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string S; cin >> S;
	
	if(S == "SUN") cout << 7 << endl;
	if(S == "MON") cout << 6 << endl;
	if(S == "TUE") cout << 5 << endl;
	if(S == "WED") cout << 4 << endl;
	if(S == "THU") cout << 3 << endl;
	if(S == "FRI") cout << 2 << endl;
	if(S == "SAT") cout << 1 << endl;


	return 0;

}

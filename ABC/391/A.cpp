#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string d; cin >> d;

	if(d == "N") cout << 'S' << endl;
	if(d == "E") cout << 'W' << endl;
	if(d == "W") cout << 'E' << endl;
	if(d == "S") cout << 'N' << endl;

	if(d == "NE") cout << "SW" << endl;
	if(d == "NW") cout << "SE" << endl;
	if(d == "SE") cout << "NW" << endl;
	if(d == "SW") cout << "NE" << endl;

	return 0;

}

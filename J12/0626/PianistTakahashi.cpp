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

	string S; cin >> S;

	string ans = "";
	if(S.substr(0, 12) == "WBWBWWBWBWBW") ans = "Do";
	else if(S.substr(0, 12) == "WBWWBWBWBWWB") ans = "Re";
	else if(S.substr(0, 12) == "WWBWBWBWWBWB") ans = "Mi";
	else if(S.substr(0, 12) == "WBWBWBWWBWBW") ans = "Fa";
	else if(S.substr(0, 12) == "WBWBWWBWBWWB") ans = "So";
	else if(S.substr(0, 12) == "WBWWBWBWWBWB") ans = "La";
	else if(S.substr(0, 12) == "WWBWBWWBWBWB") ans = "Si";

	cout << ans << endl;

	return 0;

}

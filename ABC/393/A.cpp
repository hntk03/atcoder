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

	string S1, S2; cin >> S1 >> S2;

	if(S1 == "sick" and S2 == "sick") cout << 1 << endl;
	else if(S1 == "sick" and S2 != "sick") cout << 2 << endl;
	else if(S1 != "sick" and S2 == "sick") cout << 3 << endl;
	else cout << 4 << endl;

	return 0;

}

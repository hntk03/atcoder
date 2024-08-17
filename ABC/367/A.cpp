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

	int A, B, C; cin >> A >> B >> C;

	vector<bool> hour(24, true);

	FOR(i,B,C){
		hour[i] = false;
	}

	if(B>C){
		FOR(i,B,24){
			hour[i] = false;
		}

		FOR(i,0,C){
			hour[i] = false;
		}
	}
	
	if(hour[A]) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

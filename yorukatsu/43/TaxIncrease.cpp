#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int A, B; cin >> A >> B;
	
	REP(i,100000){
		int x = i * 108 / 100 - i;
		int y = i * 110 / 100 - i;

		if(x == A and y == B){
			cout << i << endl;
			return 0;
		}


	}

	cout << -1 << endl;

	return 0;

}

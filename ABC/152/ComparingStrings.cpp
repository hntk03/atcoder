#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int a, b; cin >> a >> b;
	int small = min(a, b);
	int big = max(a, b);

	REP(i,big){
		cout << small;
	}
	cout << endl;


	return 0;

}

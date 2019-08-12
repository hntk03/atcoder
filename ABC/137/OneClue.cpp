#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int K, X; cin >> K >> X;
	FOR(i, X-K+1, X+K) cout << i << ' ';
	cout << endl;


	return 0;

}

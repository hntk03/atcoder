#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, A, B; cin >> N >> A >> B;

	int d = B - A;
	if(d%2 == 0) cout << "Alice" << endl;
	else cout << "Borys" << endl;


	return 0;

}

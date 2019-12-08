#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int A1, A2, A3; cin >> A1 >> A2 >> A3;
	
	if(A1+A2+A3 <= 21) cout << "win" << endl;
	else cout << "bust" << endl;


	return 0;

}

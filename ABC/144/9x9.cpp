#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int A, B; cin >> A >> B;
	int ans = 0;
	if(A > 9 or B > 9) ans = -1;
	else ans = A * B;

	cout << ans << endl;


	return 0;

}

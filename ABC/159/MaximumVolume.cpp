#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int L; cin >> L;
	double ans = L/3.0;
	ans = pow(ans, 3);

	cout << setprecision(13) <<  ans << endl;


	return 0;

}

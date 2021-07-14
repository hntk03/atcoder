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

	vector<int> A(3);
	REP(i,3) cin >> A[i];

	SORT(A);

	if(A[1] - A[0] == A[2] - A[1]) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}

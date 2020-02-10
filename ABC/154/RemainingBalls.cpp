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

	string S, T; cin >> S >> T;
	int A, B; cin >> A >> B;
	string U; cin >> U;
	if(S == U) A--;
	else if(T == U) B--;
	cout << A << " " << B << endl;


	return 0;

}

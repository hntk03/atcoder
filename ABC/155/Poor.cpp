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

	int A, B, C; cin >> A >> B >> C;
	bool flag = false;
	if(A == B and A != C) flag = true;
	else if(B == C and A != B) flag = true;
	else if(A == C and A != B) flag = true;

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}

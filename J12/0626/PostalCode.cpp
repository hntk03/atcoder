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

	int A, B; cin >> A >> B;
	string S; cin >> S;

	int a = 0, b = 0;
	bool c = (S[A] == '-');

	REP(i,A){
		if(S[i]>='0' and S[i] <='9') a++;
	}

	FOR(i,A+1,A+1+B){
		if(S[i]>='0' and S[i] <='9') b++;
	}
	
	if(c and A == a and B == b) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}

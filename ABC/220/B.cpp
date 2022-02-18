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

	ll K; cin >> K;
	ll A, B; cin >> A >> B;

	ll A10 = A%10;
	A /= 10;
	ll B10 = B%10;
	B /= 10;

	ll tmp = K;
	while(A!=0){
		A10 += tmp*(A%10);
		A /= 10;
		tmp *= K;
	}

	tmp = K;
	while(B!=0){
		B10 += tmp*(B%10);
		tmp *= K;
		B /= 10;
	}

	cout << A10*B10 << endl;

	return 0;

}

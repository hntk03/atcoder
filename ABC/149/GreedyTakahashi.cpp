#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	ll A, B, K; cin >> A >> B >> K;

	ll ans_A, ans_B;
	if(A > K){
		ans_A = A-K;
		ans_B = B;
	}else{
		ans_A = 0;
		K = K - A;
		ans_B = max((ll)0, B-K);

	}

	cout << ans_A << " " << ans_B << endl;


	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int N; cin >> N;
	vector<int> A(N+1);
	vector<int> B(N);

	REP(i,N+1) cin >> A[i];
	REP(i,N) cin >> B[i];

	ll ans = 0;
	REP(i,N){
		// A[i]体の全てのモンスターを倒せる
		if(A[i] <= B[i]){ 
			ans += A[i];
			B[i] -= A[i];
		}
		// 街iのモンスターをB[i]だけ倒せる
		else if(A[i] > B[i]){
			ans += B[i];
			B[i] = 0;
		}
		//まだ倒せそうなら街i+1も倒しておく
		if(B[i] > 0){
			if(A[i+1] <= B[i]){
				ans += A[i+1];
				A[i+1] = 0;
			}else{
				ans += B[i];
				A[i+1] -= B[i];
			}
		}
	}

	cout << ans << endl;




	return 0;

}

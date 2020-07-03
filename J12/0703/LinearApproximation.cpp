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

ll calc(vector<int> A, int b){
	int N = A.size();

	ll sum = 0;	
	REP(i,N){
		sum += abs(A[i] - b);
	}
	return sum;
}

int main(void){

	int N; cin >> N;

	vector<int> A(N);
	REP(i,N){
		cin >> A[i];
		A[i] = abs(A[i]  - (i+1));
	}

	vector<int> B = A;
	SORT(B);
	ll ans = INF;
	if(N%2 == 0){
		ans = min(calc(A, B[N/2-1]), ans);
		ans = min(calc(A, B[N/2]), ans);
	}else{
		ans = calc(A, B[N/2]);
	}
	

	cout << ans << endl;

	return 0;

}

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

	
	int N; cin >> N;

	vector<vector<int>> A(N);
	REP(i,N){
		REP(j,i+1){
			int a; cin >> a;
			A[i].push_back(a);
		}
	}

	int j = 1;
	FOR(i,1,N+1){
		if(i >= j){
			j = A[i-1][j-1];
		}else{
			j = A[j-1][i-1];
		}
	}

	cout << j << endl;

	return 0;

}

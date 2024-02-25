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

	vector<int> A;
	A.push_back(0);
	REP(i,N){
		int a; cin >> a;
		A.push_back(a);
	}

	A.push_back(0);

	int cost = 0;
	FOR(i,1,A.size()){
		cost += abs(A[i]-A[i-1]);
	}

	FOR(i,1,A.size()-1){
		int d1 = abs(A[i]-A[i-1]) + abs(A[i+1]-A[i]);
		int d2 = abs(A[i+1] - A[i-1]);

		cout << cost - d1 + d2 << endl;
	}



	return 0;

}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int K; cin >> K;
	int A, B; cin >> A >> B;

	FOR(i,A, B+1){
		if(i % K == 0){
			cout << "OK" << endl;
			return 0;
		}

	}

	cout << "NG" << endl;

	return 0;

}

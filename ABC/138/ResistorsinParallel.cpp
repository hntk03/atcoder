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
	double sum = 0.0;
	REP(i,N){
		int A; cin >> A;
		sum += 1.0 / A;
	}

	double ans = 1.0 / sum;
	printf("%f\n", ans);

	return 0;

}

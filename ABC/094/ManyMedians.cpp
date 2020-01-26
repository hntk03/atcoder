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
	vector<int> X(N);
	vector<int> Y(N);

	REP(i,N){
		cin >> X[i];
		Y[i] = X[i];
	}

	SORT(Y);

	REP(i,N){
		if(X[i] < Y[N/2]) cout << Y[N/2] << endl;
		else cout << Y[N/2-1] << endl;
	}


	return 0;

}

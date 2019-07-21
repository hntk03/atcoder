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
	vector<int> A(N);
	vector<int> s(N);
	REP(i,N){
		cin >> A[i];
		s[i] = A[i];
	}

	SORT(s);

	REP(i,N){
		int idx = N - 1;
		if(s.back() == A[i]) idx--;

		cout << s[idx] << endl;

	}




	return 0;

}

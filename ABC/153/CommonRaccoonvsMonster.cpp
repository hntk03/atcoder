#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){


	int H, N; cin >> H >> N;
	int sum = 0;
	REP(i,N){ 
		int A; cin >> A;
		sum += A;
	}

	if(sum >= H) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}

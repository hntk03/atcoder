#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int A, B; cin >> A >> B;
	int d = abs(A-B);

	if(d % 2 == 0){
		cout << min(A, B) + d / 2 << endl;
	}else{
		cout << "IMPOSSIBLE" << endl;
	}


	return 0;

}

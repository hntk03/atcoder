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

	vector<int> v(3, 0);
	v[A]++;
	v[B]++;

	FOR(i,1,4){
		if(v[i] == 0) cout << i << endl;
	}

	return 0;

}

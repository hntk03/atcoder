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

	map<int, int> mp;
	REP(i,7){
		int A; cin >> A;
		mp[A]++;
	}

	bool two = false;
	int three = 0;

	for( auto[k,v]: mp ){
		if(v == 2) two = true;
		if(v >= 3) three++;
	}

	if((two and three) or (three >= 2)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;

}

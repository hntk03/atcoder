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

	vector<ll> A;	

	int a; cin >> a;
	A.push_back(a);

	if(a == 0){
		cout << "0" << endl;
		return 0;
	}

	while(true){
		cin >> a;
		A.push_back(a);

		if(a == 0){
			break;
		}
	}

	reverse(A.begin(), A.end());

	for(auto x : A){
		cout << x << endl;
	}

	return 0;

}

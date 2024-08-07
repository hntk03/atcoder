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

	ll N; cin >> N;
	N--;


	vector<int> a;
	while(N > 0){
		a.push_back(N%5);
		N /= 5;
	}

	if(a.empty()) a.push_back(0);
	reverse(a.begin(), a.end());

	for(int x : a) cout << x * 2;
	cout << endl;

	return 0;

}

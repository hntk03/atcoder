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

	int N; cin >> N;

	vector<int> b;

	while(N > 0){
		b.push_back(N%2);
		N /= 2;
	}

	if(b.size() < 10){
		int addNum = 10 - b.size();
		REP(i,addNum) b.push_back(0);
	}

	reverse(b.begin(), b.end());

	REP(i,b.size()){
		cout << b[i];
	}
	cout << endl;

	return 0;

}

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
	vector<int> A(N);
	REP(i,N){
		int x; cin >> x;
		x--;
		A[x] = i;
	}

	vector<pair<int, int> > ans;
	REP(i,N){
		if(A[i] == i) continue;
		int a = A[i];
		int b = A[a];
		ans.push_back(make_pair(min(a+1, b+1), max(a+1, b+1)));
		swap(A[i], A[a]);
	}

	cout << ans.size() << endl;
	for(auto x : ans){
		cout << x.first << " " << x.second << endl;
	}

	return 0;

}

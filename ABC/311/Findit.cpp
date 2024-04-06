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
	vector<int> A(N+1);

	REP(i,N) cin >> A[i+1];

	vector<int> id(N+1);
	int k = 1;
	int v = 1;
	while(id[v] == 0){
		id[v] = k++;
		v = A[v];
	}

	vector<int> ans;
	int len = k - id[v];
	REP(i,len){
		ans.push_back(v);
		v = A[v];
	}
	
	cout << ans.size() << endl;
	for(int v : ans) cout << v << " ";
	cout << endl;

	return 0;

}

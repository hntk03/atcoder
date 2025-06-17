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

	int N, Q; cin >> N >> Q;
	vector<int> X(Q), box(N+1), ball(Q); 
	REP(i,Q) cin >> X[i];
	
	vector<int> ans;
	REP(i,Q){
		if(X[i] >= 1){
			ans.push_back(X[i]);
			box[X[i]]++;
		}else{
			int idx = 1;
			FOR(i,2,N+1){
				if(box[i] < box[idx]) idx = i;
			}
			ans.push_back(idx);
			box[idx]++;
		}
	}

	for(int x: ans) cout << x << " ";
	cout << endl;

	return 0;

}

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

	int Q; cin >> Q;

	queue<int> que;
	REP(i,Q){
		int type; cin >> type;

		if(type == 1){
			int x; cin >> x;
			que.push(x);
		}else{
			cout << que.front() << endl;
			que.pop();
		}
	}

	return 0;

}

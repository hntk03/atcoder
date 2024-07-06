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
	vector<int> front(N, -1), back(N, -1);

	REP(qi,Q){
		int type; cin >> type;
		if(type == 3){
			int x; cin >> x;
			--x;

			while(front[x] != -1) x = front[x];
			vector<int> ans = {x+1};
			while(back[x] != -1){
				x = back[x];
				ans.push_back(x+1);
			}

			cout << ans.size() << " ";
			REP(i,ans.size()) cout << ans[i] << " ";
			cout << endl;

		}else{
			int x, y; cin >> x >> y;
			x--; y--;
			if(type == 1){
				back[x] = y;
				front[y] = x;
			}else{
				back[x] = -1;
				front[y] = -1;
			}
		}

	}


	return 0;

}

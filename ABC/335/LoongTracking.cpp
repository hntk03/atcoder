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

	deque<pair<int, int> > pos;

	REP(i,N){
		pos.push_back(make_pair(i+1, 0));
	}

	REP(i,Q){
		int j; cin >> j;
		if(j == 1){
			char C; cin >> C;

			pos.pop_back();
			pair<int, int> now = pos.front();

			if(C == 'R'){
				pos.push_front(make_pair(now.first+1, now.second));
			}else if(C == 'L'){
				pos.push_front(make_pair(now.first-1, now.second));
			}else if(C == 'U'){
				pos.push_front(make_pair(now.first, now.second+1));
			}else{
				pos.push_front(make_pair(now.first, now.second-1));
			}
		}else{
			int p; cin >> p;
			p--;
			cout << pos[p].first << " " << pos[p].second << endl;
		}
	}

	return 0;

}

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

	deque<pair<ll, ll>> deq;
	ll start = 0;

	REP(i,Q){
		int q; cin >> q;
		if(q == 1){
			int l; cin >> l;
			if(deq.size() == 0) deq.push_back(make_pair(0, l));  
			else deq.push_back(make_pair(deq.back().first+deq.back().second, l));
		}else if(q == 2){
			start += deq.front().second;
			deq.pop_front();
			if(deq.size() == 0) start = 0;
		}else{
			int k; cin >> k;
			k--;
			cout << deq[k].first - start << endl;
		}
	}

	return 0;

}

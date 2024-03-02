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
	vector<pair<int, int> > box;

	REP(i,N){
		int A; cin >> A;
		if(box.size() == 0){
			box.push_back(make_pair(A, 1));
		}else if(box.back().first == A){
			int cnt = box.back().second;
			box.back() = make_pair(A, cnt+1);
		}else{
			box.push_back(make_pair(A, 1));
		}

		if(box.back().first == box.back().second){
				box.erase(box.end() - 1);
		}

		ll ans = 0;
		for(auto p : box){
			ans += p.second;
		}
		cout << ans << endl;
	}

	return 0;

}

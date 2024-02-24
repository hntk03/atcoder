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
	vector< vector<int> > cards(N+1);
	vector< set<int> > boxes(2*1e5+1);

	vector<string> ans;

	REP(i,Q){
		int q; cin >> q;
		if(q == 1){
			int i, j; cin >> i >> j;
			cards[j].push_back(i);
			boxes[i].insert(j);
			
		}else if(q == 2){
			int i; cin >> i;
			string s;
			sort(cards[i].begin(), cards[i].end());
			for(int x: cards[i]){
				cout << x << ' ';
			}
			cout << endl;
		}else{
			int i; cin >> i;
			for(int x : boxes[i]){
				cout << x << ' ';
			}
			cout << endl;
		}
	}

	return 0;

}

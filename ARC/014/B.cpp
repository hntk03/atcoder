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

	vector<string> W(N);
	for(auto &w : W) cin >> w;


	int ans = 0;
	set<string> st;
	char prev;
	REP(i,N){
		if(i == 0) prev = W[i].front();


		if(st.find(W[i]) != st.end()){
			ans = i%2+1;
			break;
		}
		st.insert(W[i]);

		if(prev != W[i].front()){
			ans = i%2+1;
			break;
		}

		prev = W[i].back();
	}

	if(ans == 0) cout << "DRAW" << endl;
	else if(ans == 1) cout << "LOSE" << endl;
	else cout << "WIN" << endl;

	return 0;

}

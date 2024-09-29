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

	int N, M; cin >> N >> M;

	vector<bool> b(N, false);
	vector<string> ans;

	REP(i,M){
		int A; cin >> A;
		A--;
		char B; cin >> B;

		if(B == 'F'){
			ans.push_back("No");
			continue;
		} 

		if(b[A]){
			ans.push_back("No");
			continue;
		}

			ans.push_back("Yes");
			b[A] = true;
	}

	for(string s: ans){
		cout << s << endl;
	}

	return 0;

}

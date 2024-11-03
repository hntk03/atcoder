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

int three(int cnt){
	int ret = 1;
	REP(i,cnt) ret *= 3;

	return ret;
}

int main(void){

	int M; cin >> M;

	vector<int> ans;

	int A = 10;
	while(M > 0){

		if(M >= three(A)){
			M -= three(A);
			ans.push_back(A);
		} 
		else{
			A--;
		}
	}

	cout << ans.size() << endl;
	for(int a : ans) cout << a << " ";
	cout << endl;

	return 0;

}

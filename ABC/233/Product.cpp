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
int N; 
ll X;
vector<vector<int> > A;
ll ans = 0;

void search(int bag, ll p){
	if(bag == A.size()){
		if(p == X) ans++;
		return;
	}
	
	REP(i,A[bag].size()){
		if(p > X/A[bag][i]) continue;
		search(bag+1, p*A[bag][i]);
	}
}

int main(void){

	cin >> N;
	cin >> X;

	A = vector<vector<int> >(N);
	for(auto &a : A){
		int L; cin >> L;
		REP(i,L){
			int tmp; cin >> tmp;
			a.push_back(tmp);
		}
	}

	search(0, 1);

	cout << ans << endl;

	return 0;

}

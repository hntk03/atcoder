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
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<bool> used(N);
	for(int x : A){
		if(x == -1) continue;
		x--;
		if(used[x]){
			cout << "No" << endl;
			return 0;
		}
		used[x] = true;
	}

	vector<int> canUse;
	REP(i,N){
		if(used[i]) continue;
		canUse.push_back(i+1);
	}

	cout << "Yes" << endl;
	for(int x : A){
		if(x == -1){
			cout << canUse.back() << " ";
			canUse.pop_back();
		}else{
			cout << x << " ";
		}
	}

	cout << endl;
	return 0;
}

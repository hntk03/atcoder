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

	vector<int> sortA = A;
	sort(sortA.begin(), sortA.end());
	sortA.erase(unique(sortA.begin(), sortA.end()), sortA.end());

	for(int a : A){
		int idx = lower_bound(sortA.begin(), sortA.end(), a) - sortA.begin();
		cout << idx + 1 << " ";
	}

	cout << endl;
	return 0;

}

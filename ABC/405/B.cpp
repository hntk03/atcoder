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
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	auto check = [&](vector<int> a) -> bool{
		vector<bool> num(M, false);
		REP(i,a.size()){
			int x = a[i] - 1;
			num[x] = true;
		}

		for(bool b : num){
			if(!b){
				return true;
			}
		}
		return false;
	};

	int ans = 0;
	while(!check(A)){
		A.pop_back();
		ans++;
	}

	cout << ans << endl;
	return 0;

}

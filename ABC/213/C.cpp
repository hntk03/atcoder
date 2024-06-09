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

	ll H, W, N; cin >> H >> W >> N;

	vector<ll> A(N), B(N);

	map<ll, ll> row, col;
	for(ll i = 0;i<N;i++){
		cin >> A[i] >> B[i];
		row[A[i]] = -1LL;
		col[B[i]] = -1LL;
	}

	ll idx = 1;
	for(auto x : row){
		row[x.first] = idx++;
	}

	idx = 1;
	for(auto x : col){
		col[x.first] = idx++;
	}

	for(ll i = 0;i<N;i++){
		cout << row[A[i]] << " " << col[B[i]] << endl;
	}



	return 0;

}

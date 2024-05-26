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

	int N, T; cin >> N >> T;

	vector<int> row(N, 0), col(N, 0);
	int l1 = 0, l2 = 0;

	REP(i,T){
		int A; cin >> A;
		A--;
		int r = A / N;
		int c = A % N;
		row[r]++;
		col[c]++;
		if(r == c) l1++;
		if(r+c == (N-1)) l2++;

		if(row[r] == N or col[c] == N or l1 == N or l2 == N){
			cout << i+1 << endl;
			return 0;
		} 
	}

	cout << -1 << endl;

	return 0;

}

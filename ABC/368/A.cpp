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

	int N, K; cin >> N >> K;
	deque<int> deq;
	REP(i,N){
		int A; cin >> A;
		deq.push_back(A);
	}

	REP(i,K){
		int A = deq.back();
		deq.pop_back();
		deq.push_front(A);
	}
	
	REP(i,N) cout << deq[i] << " ";
	cout << endl;

	return 0;

}

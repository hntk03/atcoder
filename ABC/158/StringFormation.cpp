#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	deque<char> deq;
	REP(i,S.length()){
		deq.push_back(S[i]);
	}
	int Q; cin >> Q;

	int cnt = 0;
	REP(i,Q){
		int T; cin >> T;

		if(T == 1){
			cnt++;
		}else{
			int F;
			char C;
			cin >> F >> C;
			F += cnt % 2;
			F %= 2;
			if(F == 1) deq.push_front(C);
			else deq.push_back(C);
		}
	}

	int N = deq.size();
	REP(i,N){
		if(cnt%2 == 1) cout << deq.at(N-i-1);
		else cout << deq.at(i);
	}
	cout << endl;

	return 0;

}

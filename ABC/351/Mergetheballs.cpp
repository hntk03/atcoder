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

bool  work(ll x, stack<ll>& st){
	ll top = st.top();
	if(top == x){
		st.pop();
		st.push(top+1);
		return true;
	}else{
		st.push(x);
		return false;
	}
}

int main(void){

	int N; cin >> N;	
	
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	stack<ll> st;
	st.push(A.front());
	FOR(i,1,N){
		work(A[i], st);

		bool f = true;
		while(f){
			if(st.size() == 1) break;
			ll top = st.top();
			st.pop();
			f = work(top, st);
		}
	}

	cout << st.size() << endl;

	return 0;

}

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
	vector<int> a(M);
	REP(i,M) cin >> a[i];

	int idx = 0;
	stack<int> st;
	FOR(i,1,N+1){
		if(idx < M and a[idx] == i){
			st.push(i);
			idx++;
		}else{
			cout << i << " ";
			while(!st.empty()){
				cout << st.top() << " ";
				st.pop();
			}
		}
	}

	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}

	cout << endl;
	
	


	return 0;

}

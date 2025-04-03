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

	string S; cin >> S;

	stack<char> st;
	int N = S.length();
	REP(i,N){
		if(st.empty()){
			st.push(S[i]);
			continue;
		} 

		if(st.top() == '(' and S[i] == ')'){
			st.pop();
		}else if(st.top() == '<' and S[i] == '>'){
			st.pop();
		}else if(st.top() == '[' and S[i] == ']'){
			st.pop();
		}else{
			st.push(S[i]);
		}
	}
	
	if(st.empty()) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}

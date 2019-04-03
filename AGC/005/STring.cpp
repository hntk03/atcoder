#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	stack<char> st;	

	string X; cin >> X;
	st.push(X[0]);
	FOR(i,1,X.length()){
		if(X[i] == 'S') st.push(X[i]);
		else if(X[i] == 'T' and (st.top() == 'T' or st.empty())) st.push(X[i]);
		else if(st.top() == 'S' and X[i] == 'T') st.pop();
	}

	cout << st.size() << endl;


	return 0;

}

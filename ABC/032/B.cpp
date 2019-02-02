#include <stdio.h>
#include <cmath>
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

	string s;
	int k;
	cin >> s >> k;
	set<string> st;
	REP(i, s.size()-k+1) st.insert(s.substr(i, k));
	cout << st.size() << endl;

	return 0;

}

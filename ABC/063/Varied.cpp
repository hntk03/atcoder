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

	string s; cin >> s;
	int len = s.size();

	set<char> st;
	REP(i,len) st.insert(s[i]);

	if(st.size() == len) cout << "yes" << endl;
	else cout << "no" << endl;


	return 0;

}

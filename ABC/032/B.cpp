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
	int k; cin >> k;

	if(k > s.size()) cout << 0 << endl;

	else{
		set<string> st;
		REP(i,s.length()-k+1){
			st.insert(s.substr(i,k));
		}
		cout << st.size() << endl;
	}

	return 0;

}

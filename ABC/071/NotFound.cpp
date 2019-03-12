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
	vector<int> alpha(26,0);

	REP(i,s.size()){
		alpha[s[i]-'a']++;
	}

	REP(i,26){
		if(alpha[i] == 0){
			cout << (char)(i+'a') << endl;
			return 0;
		}
	}

	cout << "None" << endl;
	return 0;

}

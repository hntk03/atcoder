#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

string s; 
string t; 

int S;
int T;


bool match(int k){

	REP(i,T){
		if(t[i] != s[i+k] and s[i+k] != '?'){
			return false;
		}
	}

	return true;

}

string construct(int k){

	string ans = s;
	REP(i,T){
		ans[i+k] = t[i];
	}

	REP(i,S){
		if(ans[i] == '?') ans[i] = 'a';
	}

	return ans;

}


int main(void){

	cin >> s;
	cin >> t;

	S = s.length();
	T = t.length();

	bool ans = false;
	REP(i,S-T+1){
		ans = match(i);
		if(ans == true){
			cout << construct(i) << endl;
			return 0;
		}
	}


	cout << "UNRESTORABLE" << endl;

	return 0;

}

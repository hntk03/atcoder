#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

string S, T;

bool match(int k){

	REP(i,T.length()){
		if(S[i+k] == T[i] or S[i+k] == '?') continue;
		else return false;
	}

	return true;

}


int main(void){


	cin >> S >> T;

	int N = S.length() - T.length();
	int idx = -1;
	REP(i,N+1){
		if(match(i) == true) idx = i;
	}

	if(idx == -1){
		cout << "UNRESTORABLE" << endl;
	}else{
		REP(i,S.length()){
			if(i < idx){
				if(S[i] == '?') cout << 'a';
				else cout << S[i];
			}else if(i < idx + T.length()) cout << T[i-idx];
			else{
				if(S[i] == '?') cout << 'a';
				else cout << S[i];
			}
		}
		cout << endl;
	}






	return 0;

}

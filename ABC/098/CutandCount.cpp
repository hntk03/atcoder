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

int func(string s, string t){

	int ans = 0;
	for(char c='a';c<='z';++c){
		bool founds = false, foundt=false;
		REP(i,s.length()){
			if(s[i] == c) founds = true;
		}
		REP(i,t.length()){
			if(t[i] == c) foundt = true;
		}
		if(founds and foundt) ans++;
	}

	return ans;

}


int main(void){

	
	int N; cin >> N;
	string S; cin >> S;

	int ans = 0;
	for(int i=0;i<=N;++i){
		int tmp = func(S.substr(0,i), S.substr(i));
		ans = max(ans, tmp);
	}

	cout << ans << endl;

	return 0;

}

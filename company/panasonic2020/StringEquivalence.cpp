#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;
int N; 

void dfs(string s, char mx){
	if(s.length() == N){
		cout << s << endl;
		return;
	}
	for(char c = 'a'; c <= mx+1; c++){
		string t = s + c;
		dfs(t, max(mx, c));
	}

}

int main(void){

	cin >> N;
	dfs("", 'a'-1);


	return 0;

}

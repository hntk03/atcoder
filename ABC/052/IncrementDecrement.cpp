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

	int N; cin >> N;
	string s; cin >> s;

	int ans = 0;
	int x = 0;
	REP(i,N){
		if(s[i] == 'I'){
			x++;
			ans = max(x, ans);
		}else{
			x--;
		}
	}

	cout << ans << endl;
	return 0;

}

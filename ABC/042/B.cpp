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

	int N,L; scanf("%d %d", &N, &L);

	vector<string> s(N);
	REP(i,N){
		cin >> s[i];
	}

	SORT(s);

	string ans = "";
	REP(i,N){
		ans += s[i];
	}

	cout << ans << endl;
	return 0;

}

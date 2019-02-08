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

	int N; scanf("%d", &N);
	vector<string> s(N);
	REP(i,N){
			cin >> s[i];
	}

	REP(i,N){
		REP(j,N){
			cout << s[N-j-1][i];
		}
		cout << endl;
	}


	return 0;

}

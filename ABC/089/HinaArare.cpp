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
	REP(i,N){
		string s;
		cin >> s;
		if(s[0] == 'Y'){
			cout << "Four" << endl;
			return 0;
		}
	}

	
	cout << "Three" << endl;

	return 0;

}

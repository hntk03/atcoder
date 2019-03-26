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

	string s[3];
	REP(i,3) cin >> s[i];
	int idx[3] = {0};
	int curr = 0;

	while(1){
		curr = s[curr][idx[curr]++] - 'a';
		if(idx[curr] >= s[curr].size()){
			cout << char('A' + curr) << endl;
			return 0;
		}
	}


	return 0;

}

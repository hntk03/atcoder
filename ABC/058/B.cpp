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

	string o,e;

	cin >> o;
	cin >> e;

	int N = o.size() + e.size();
	int idx_o = 0;
	int idx_e = 0;
	FOR(i,1, N+1){
		if(i%2 == 1){ 
			cout << o[idx_o++];
		}else{
			cout << e[idx_e++];
		}
	}
	cout << endl;


	return 0;

}

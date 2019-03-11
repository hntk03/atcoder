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

	int x, y; cin >> x >> y;
	int group[12] = {1,3,1,2,1,2,1,1,2,1,2,1};

	if(group[--x] == group[--y]) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}

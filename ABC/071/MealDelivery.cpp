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

	int x, a, b; cin >> x >> a >> b;
	if(abs(x-a)<abs(x-b)) cout << 'A' << endl;
	else cout << 'B' << endl;


	return 0;

}

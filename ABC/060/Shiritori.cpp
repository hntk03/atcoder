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

	string a, b, c;
	cin >> a >> b >> c;

	if(a.back() == b.front() and b.back() == c.front()) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;

}

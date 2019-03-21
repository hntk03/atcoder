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

	string s; 
	string t;
	cin >> s >> t;

 	SORT(s);
 	SORT(t);
	reverse(t.begin(), t.end());

	if(s < t) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}

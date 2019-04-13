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

	string day; cin >> day;

	if(day[0] == 'M') cout << 5 << endl;
	else if(day == "Tuesday") cout << 4 << endl;
	else if(day == "Wednesday") cout << 3 << endl;
	else if(day == "Thursday") cout << 2 << endl;
	else if(day == "Friday") cout << 1 << endl;
	else cout << 0 << endl;


	return 0;

}

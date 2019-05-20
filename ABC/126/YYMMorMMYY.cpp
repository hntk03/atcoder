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

	string S; cin >> S;
	bool first = false;
	bool end = false; 
	if(S.substr(0,2) >= "01" and S.substr(0,2) <= "12") first = true;
	if(S.substr(2,2) >= "01" and S.substr(2,2) <= "12") end = true;
	
	if(first == true and end == false) cout << "MMYY" << endl;
	else if(first == false and end == true) cout << "YYMM" << endl;
	else if(first == false and end == false) cout << "NA" << endl;
	else cout << "AMBIGUOUS" << endl;


	return 0;

}

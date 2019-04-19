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
	bool I = false;
	bool C = false;
	bool T = false;
	REP(i,S.length()){
		if(I == false and (S[i] == 'I' or S[i] == 'i')) I = true;
		else if(I == true and (S[i] == 'C' or S[i] == 'c')) C = true;
		else if(C == true and (S[i] == 'T' or S[i] == 't')) T = true;
	}

	if(I == true and C == true and T == true) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}

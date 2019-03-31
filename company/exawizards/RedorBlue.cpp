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
	string S; cin >> S;
	int red = 0, blue = 0;
	REP(i,N){
		if(S[i] == 'R') red++;
		else blue++;
	}

	if(red > blue) cout << "Yes" << endl;
	else cout << "No" << endl;
	


	return 0;

}

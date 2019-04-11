#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define LENGTH 6


int main(void){

	string E;
	string L;

	REP(i,LENGTH){
		char e; cin >> e;
		E += e;
	}

	char b; cin >> b;

	REP(i,LENGTH){
		char l; cin >> l;
		L += l;
	}

	int hit = 0;
	bool bonus = false;
	REP(i,LENGTH){
		REP(j,LENGTH){
			if(E[i] == L[j]) hit++;

		}
		if(L[i] == b) bonus = true;
	}

	int ans;
	if(hit < 3) ans = 0;
	else{
		ans = 7 - hit;
		if(ans == 2 and bonus == false) ans++;
	}

	cout << ans << endl;

	return 0;

}

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

	vector<int> v(5);
	REP(i,5) cin >> v[i];

	int k; cin >> k;

	bool ans = true;
	REP(i,4){
		FOR(j,i+1,5){
			if(v[j]-v[i] > k) ans = false;
		}
	}

	cout << (ans ? "Yay!" : ":(") << endl;


	return 0;

}

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
	string s, t; cin >> s >> t;

	
	REP(i,N+1){
		string concat = s;
		concat += t.substr(N-i);
		int len = concat.length();
		if(concat.substr(0,N) == s and concat.substr(len-N) == t){
			cout << len << endl;
			return 0;
		}
	}

	


	return 0;

}

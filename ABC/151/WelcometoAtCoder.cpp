#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, M; cin >> N >> M;
	vector<bool> result(N+1, false);
	vector<int> status(N+1, 0);


	REP(i,M){
		int p;
		string S;
		cin >> p >> S;
		p--;
		if(S == "AC") result[p] = true;
		if(S == "WA" and result[p] == false) status[p]++;

	}

	int a = 0, b = 0;
	REP(i,N+1){
		if(result[i]){ 
			a++;
			b += status[i];
		}
	}

	cout << a << ' ' << b << endl;


	return 0;

}

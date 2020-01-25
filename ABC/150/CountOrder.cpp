#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	string P, Q;

	REP(i,N){
		char s; cin >> s;
		P += s;
	} 
	REP(i,N){
		char s; cin >> s;
		Q += s;
	} 
	
	string tmp;
	REP(i,N){
		tmp += (char)(i + '1');
	}

	int a;
	int b;
	int idx = 1;

	do{
		if(tmp == P) a = idx;
		if(tmp == Q) b = idx;
		idx++;
	}while(next_permutation(tmp.begin(), tmp.end()));

	cout << abs(a-b) << endl;

	return 0;

}

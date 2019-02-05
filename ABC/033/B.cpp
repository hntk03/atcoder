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

	int N; scanf("%d", &N);

	vector<pair<int, string>> sp(N);

	
	int sum = 0;
	REP(i,N){
		string s;
		int p;
		cin >> s >> p;
		sp[i] = make_pair(p, s);
		sum += p;
	}
	
	sort(sp.begin(),sp.end());

	int max_pop =  sp.back().first;

	if( max_pop > (sum/2) ) cout << sp.back().second << endl;
	else cout << "atcoder" << endl;

	return 0;

}

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

	vector<pair<int, int>> pairs(N);

	int a;
	REP(i,N){
		scanf("%d", a);
		make_pair(a,i);
	}

	sort(pairs.begin(),pairs.end(),greater<int>());

	for(auto iter = pairs.begin();iter != pairs.end();iter++){
		printf("%d\n", iter->first);
	}


	return 0;

}

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
	map<int> odd;
	map<int> even;

	REP(i,N){ 
		int v; cin >> v;
		if(i%2 == 0) even[v]++;
		else odd[v]++;
	}

	for(value:odd){


	}




	return 0;

}

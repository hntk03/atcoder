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

	int N, M, A, B; cin >> N >> M >> A >> B;
	bool ans = true;
	int day = 0;
	bool flag = true;
	REP(i,M){ 
		int c; cin >> c;
		if(N < c and flag){
			ans = false;
			day = i + 1;
			flag = false;
		}
		N -= c;
		if(N <= A) N += B;
	}

	if(ans == true) cout << "complete" << endl;
	else cout << day << endl;

	return 0;

}

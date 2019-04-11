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
	string r; cin >> r;

	int sum = 0;
	REP(i,N){
		if(r[i] == 'A') sum += 4;
		else if(r[i] == 'B') sum += 3;
		else if(r[i] == 'C') sum += 2;
		else if(r[i] == 'D') sum += 1;
		else if(r[i] == 'F') sum += 0;
	}

	double ans = (double)sum / N;
	cout << setprecision(20) << ans << endl;

	return 0;

}

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
	int odd = 0;
	int even = 0;
	REP(i,N){
		int A; cin >> A;
		if(A % 2 == 0) even++;
		else odd++;
	}

	even += odd / 2;
	odd = odd % 2;
	string ans;
	if(odd == 1 and even > 0) ans = "NO";
	else ans = "YES";

	cout << ans << endl;
	

	return 0;

}

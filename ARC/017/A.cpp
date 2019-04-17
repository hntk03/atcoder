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
	string ans;
	if(N % 2 == 0) ans = "NO";
	else{
		bool ok = true;
		for(int i=3;i<N;i+=2){
			if(N % i == 0){
				ok = false;
				break;
			}
		}
		if(ok == true) ans = "YES";
		else ans = "NO";
	}

	cout << ans << endl;

	return 0;

}

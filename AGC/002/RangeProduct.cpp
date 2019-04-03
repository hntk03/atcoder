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

	int a, b; cin >> a >> b;

	if(a <= 0 and b >= 0) cout << "Zero" << endl;
	else if(a > 0) cout << "Positive" << endl;
	else if(b < 0){
		if((b-a)%2 == 1) cout << "Positive" << endl;
		else cout << "Negative" << endl;
	}

	return 0;

}

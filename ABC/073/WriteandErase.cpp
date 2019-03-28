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
	set<int> st;
	REP(i,N){ 
		int A;
		cin >> A;
		if(st.count(A) == 0) st.insert(A);
		else st.erase(A);
	}
	
	int ans = st.size();
	cout << ans << endl;
	return 0;

}

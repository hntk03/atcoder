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

	int N; cin >> N;
	set<string> st;
	char before;
	string W; cin >> W;
	before = W.back();
	st.insert(W);


	bool ans = true;
	REP(i,N-1){
		cin >> W;
		if(before != W.front() or st.count(W) == 1){
			ans = false;
		}
		before = W.back();
		st.insert(W);
	}

	if(ans == true){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;

}

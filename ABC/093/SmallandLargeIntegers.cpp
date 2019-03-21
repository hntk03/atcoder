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

	int A, B, K; cin >> A >> B >> K;
	set<int> st; 
	for(int i=A;i < min(A+K,B+1);++i) st.insert(i);
	for(int i=B;i > max(B-K,A-1);--i) st.insert(i);

	for(auto t:st){
		cout << t << endl;
	}



	return 0;

}

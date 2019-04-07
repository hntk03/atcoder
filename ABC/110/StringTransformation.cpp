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

	string S, T; cin >> S >> T;
	vector<int> start(26, -1);
	vector<int> goal(26, -1);

	REP(i,S.length()){
		int a = S[i] - 'a';
		int b = T[i] - 'a';

		if(start[a] != -1 or goal[b] != -1){
			if(start[a] != b or goal[b] != a){
				cout << "No" << endl;
				return 0;
			}
		}else{
			start[a] = b;
			goal[b] = a;
		}
	}

	cout << "Yes" << endl;


	return 0;

}

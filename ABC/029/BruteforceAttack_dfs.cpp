#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int N;

void dfs(string S){

	if(S.length() == N){
		cout << S << endl;
		return ;
	}else{

		dfs(S+'a');
		dfs(S+'b');
		dfs(S+'c');

	}

	return ;
}

int main(void){

	cin >> N;
	dfs("");


	return 0;

}

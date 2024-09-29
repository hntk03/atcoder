#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

bool judge(string s, int a, int b){
	if(s == "<"){
		return a < b;
	}else{
		return a > b;
	}
}

int main(void){

	vector<string> S(3);
	string name = "ABC";
	REP(i,3) cin >> S[i];

	vector<int> idx = {0, 1, 2};

	do{
		if(judge(S[0], idx[0], idx[1]) and judge(S[1], idx[0], idx[2]) and judge(S[2], idx[1], idx[2])){
			REP(i,3){
				if(idx[i] == 1){
					cout << name[i] << endl;
				}
			}
			return 0;
		}

	}while(next_permutation(idx.begin(), idx.end()));
	
	return 0;

}

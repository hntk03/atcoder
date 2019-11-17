#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	string s; cin >> s;

	if(N % 2 == 1){
		cout << "No" << endl;
		return 0;
	}else{
		int j = N/2;
		REP(i,N/2){
			if(s[i] != s[j]){
				cout << "No" << endl;
				return 0;

			}


			j++;
		}

	}

	cout << "Yes" << endl;


	return 0;

}

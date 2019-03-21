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

	string S; cin >> S;



	long long ans = 0;
	long long sum;
	int S_len = S.length();
	int N = 1 << (S_len - 1);
	REP(i,N){
		bitset<10> b(i);
		sum = S[0] - '0';
		REP(j,S_len-1){
			if(b[j] == true){
				ans += sum;
				sum = S[j+1] - '0';
			}
			else{ 
				sum *= 10;
				sum += S[j+1] - '0';
			}
		}
		ans += sum;


	}

	cout << ans << endl;
	return 0;

}

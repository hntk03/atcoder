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

	string s; cin >> s;

	int p = s.size()-1;
	int len = (int)pow(2,p);


	REP(i,len){
		bitset<11> b(10);
		for(int j=p-1;j>0;--j){
			if(b[j])
			


		}
	}


	return 0;

}

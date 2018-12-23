#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	map<string, int> vote;

	int N;
	scanf("%d", &N);

	char s[50];
	REP(i,N){
		scanf("%s", s);
		string S(s);
		vote[S]++;
	}


	string name;
	int v=0;

	for(auto iter : vote){
		if(v < iter.second){
			name = iter.first;
			v = iter.second;
		}
	}

	printf("%s\n",name.c_str());
	return 0;

}

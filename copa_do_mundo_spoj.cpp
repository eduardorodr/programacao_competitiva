#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void jogos(vector<char> times, int pos, int op){

	int a,b;
	
	if( times.size() > op && op != 1){
		
		scanf("%d %d",&a,&b);
			
		if(a>b){
			times.erase(times.begin()+(pos+1));
		}
			
		else{
			times.erase(times.begin()+pos);		
		}
		
		jogos(times,pos+1,op);	
		
	}
	else if(op!=1){
		jogos(times,0,op/2);
	}	
	else{
		scanf("%d %d",&a,&b);
		if(a>b) printf("%c\n",times[pos]);
		else printf("%c\n",times[pos+1]);
	}
	
}

int main(){
	
	vector<char> times;
	
	for(int i=0;i<16;i++){
		times.push_back(65+i);
	}
	
	jogos(times,0,8);
	
	return 0;
	
}

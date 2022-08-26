#include <iostream>
using namespace std;

int main(){
	int a, tot;
	cin >> a ;
	
	if(a<=10)
	tot = 7;
	
	else if(a>=11&&a<=30)
	tot+= (a-10)+7;
	
	else if(a>=31&&a<=100)
	tot+= ((a-30)*2)+27;
	
	else if(a>=101)
	tot+= ((a-100)*5)+167;
	
	cout << tot << "\n";
	return 0;
	
}

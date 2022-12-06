#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

	int main(int argc, char** argv) {
	
	int trim1[10], trim2[10], trim3[10], prom[10];
	
	for(int i=0; i<10; i++){
		(trim1[i] = rand()% 10)+1;
		cout<<trim1[i]<<"\t";
	}	
		cout<<endl;
	for(int i=0; i<10; i++){
		(trim2[i] = rand()% 10)+1;
		cout<<trim2[i]<<"\t";
	}
	cout<<endl;
	for(int i=0; i<10; i++){
		(trim3[i] = rand()% 10)+1;
		cout<<trim3[i]<<"\t";
	}
		cout<<endl;
	for(int i=0; i<10; i++){
	prom[i] = (trim1[i]+trim2[i]+trim3[i])/3;
	cout<<prom[i]<<"\t";
    }
    	cout<<endl;
	return 0;
}

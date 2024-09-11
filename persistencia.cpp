#include <stdio.h>
#include <iostream>

using namespace std;

main (){
	FILE *p;
	int n;
	p=fopen("datos.txt","r");
	while(!feof(p)){
		fscanf(p,"%d",&n);
		cout<<"\n"<<n;
	}	
	
	fclose(p);
}

// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
double decimalbinaire1(int n){
	int i=0;
	double s=0;						
	do{
		s=s+(n%2)*pow(10.0,i);		
		i=i+1;						
		n=n/2;						
	}while(n!=0);
	return s;
}
void decimalbinaire2(int n){
	int v[25],k=0,i;
	
	do{
		v[k]=n%2;   
		k=k+1;
		n=n/2;
	}while(n!=0);
	for(i=k-1;i>=0;i--)
		cout<<v[i];
}
int main()
{
	int n;
	do{
		cout<<"entrer n:";
		cin>>n;
	}while(n<0);
	cout<<n<<"en binaire:"<<decimalbinaire1(n);
	system("pause");
	return 0;
}


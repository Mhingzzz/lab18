#include<iostream>
using namespace std;

void myString(char *&p,int N){
	char *x = new char[N];    
	for(int i = 0; i < N;i++) x[i] = 'A'+i;
	p = &x[0];
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;
	myString(p,N);		
	cout << p;	
	delete [] p;
	return 0;
}

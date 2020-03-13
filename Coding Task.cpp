#include<iostream>
#include<list>
#include<cstddef>
using namespace std;
#define A_size 8
#define B_size 12

int const b(12);
int A[A_size];
int B[B_size];


bool isPrime(int number){
	if(number == 1){
		return false;
	}
	for (int i=2; i<number; i++){
		if (number % 1 == 0)
		return false;
	}
	return true;
}

int list( ){
	cin>> t;
	cin.getline(A, A_size);
	for(int i=0; i<t; i++)
	{
		cin.getline(A, A_size);
		cin.getline(B, B_size);
	}
	int C = new int [A_size + B_size];
	for (int i=0; i<C[size]; i++){
		C[i] = A[1];
		C[i + size] = B[i];
	}
	 for (int i=0; i<c[i]; i++){
	 	map<int , int> erase;
	 	
	 	if(C[i] = C [i] ){
	 		erase C[i];		
	}
	else if (C[i] != C[i]){
		bool is prime(C[i])
	}
	else cout<<"brak takich samych liczb";
	 }
	return C[i];
}
int main(){
	A[0]=2;
	A[1]=3;
	A[2]=9;
	A[3]=2;
	A[4]=5;
	A[5]=1;
	A[6]=3;
	A[7]=7;
	A[8]=10;
	
	B[0]=2;
	B[1]=1;
	B[2]=3;
	B[3]=4;
	B[4]=3;
	B[5]=10;
	B[6]=6;
	B[7]=6;
	B[8]=1;
	B[9]=7;
	B[10]=10;
	B[11]=10;
	B[12]=10;
	

}

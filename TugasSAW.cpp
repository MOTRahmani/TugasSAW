#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	double mc[5]={
	max(a1c[0], max(a2c[0], a3c[0])),
	max(a1c[1], max(a2c[1], a3c[1])),
	max(a1c[2], max(a2c[2], a3c[2])),
	max(a1c[3], max(a2c[3], a3c[3])),
	max(a1c[4], max(a2c[4], a3c[4]))};
	
	double Ra1c[5]={(a1c[0]/mc[0]),(a1c[1]/mc[1]),(a1c[2]/mc[2]),(a1c[3]/mc[3]),(a1c[4]/mc[4])};
	double Ra2c[5]={(a2c[0]/mc[0]),(a2c[1]/mc[1]),(a2c[2]/mc[2]),(a2c[3]/mc[3]),(a2c[4]/mc[4])};
	double Ra3c[5]={(a3c[0]/mc[0]),(a3c[1]/mc[1]),(a3c[2]/mc[2]),(a3c[3]/mc[3]),(a3c[4]/mc[4])};
	
	double w[5]={5,3,4,4,2};
	
	double RWa1c[5]={(Ra1c[0]*w[0]),(Ra1c[1]*w[1]),(Ra1c[2]*w[2]),(Ra1c[3]*w[3]),(Ra1c[4]*w[4])};
	double RWa2c[5]={(Ra2c[0]*w[0]),(Ra2c[1]*w[1]),(Ra2c[2]*w[2]),(Ra2c[3]*w[3]),(Ra2c[4]*w[4])};
	double RWa3c[5]={(Ra3c[0]*w[0]),(Ra3c[1]*w[1]),(Ra3c[2]*w[2]),(Ra3c[3]*w[3]),(Ra3c[4]*w[4])};
	
	double ha[3]={RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4],
				  RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4],
				  RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4]};
				  
	cout << "MATRIKS X: "<< endl;
	
	int a=0;
		do{
			cout << a1c[a]<< " | "; a++;}
		while (a<5);cout << endl;	
	int b=0;
		do{
			cout << a2c[b]<< " | "; b++;}
		while (b<5);cout << endl;			 
	int c=0;
		do{
			cout << a3c[c]<< " | "; c++;}
		while (c<5);cout << endl;
	
	cout << endl;
	cout << "MATRIKS R: "<< endl;
	
	int d=0;
		do{
			cout << Ra1c[d]<< " | "; d++;}
		while (d<5);cout << endl;
	int e=0;
		do{
			cout << Ra2c[e]<< " | "; e++;}
		while (e<5);cout << endl;
	int f=0;
		do{
			cout << Ra3c[f]<< " | "; f++;}
		while (f<5);cout << endl;
		
	cout << endl;
}

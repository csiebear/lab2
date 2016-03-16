#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "lab2.h"
#include <iomanip>

using namespace std;

int main(){
	string data;
	float height,weight,BMInumber;
	string category;	

	BMI bmi;
	//setting the file stream
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
	cerr << "Failed opening" << endl;
	exit(1);
	}
	ofstream outFile("file.out", ios::out);
	if(!outFile) {
	cerr << "Failed opening" << endl;
	exit(1);
	}

	while(inFile>>height>>weight){
	//	cout<<"Reading file success"<<endl;
	//	cout<<height<<"\t"<<weight<<endl;
		bmi.setWeight(weight);
		bmi.setHeight(height);
		bmi.BMI_Cal(height,weight);	
		BMInumber=bmi.getBMI();	
		category=bmi.categorize(bmi.BMI_Cal(height,weight));
		outFile<<setprecision(4)<<BMInumber<<"\t"<<category<<endl;
	}
	
	return 0;
}

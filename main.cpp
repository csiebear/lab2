#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	string data;
	float height,weight;
	//setting the file stream
	ifstream inFile("infile.in", ios::in);
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
		cout<<"Reading file success"<<endl;
		cout<<height<<"\t"<<weight<<endl;
	}
	
	return 0;
}

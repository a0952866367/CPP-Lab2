#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include "bmi.h"
using namespace std;

int main(){
	BodyMassIndex BMI;
	float h,w;
	ifstream openfile;
	
	openfile.open("file.in",ios::in);
	if( !openfile ){
		cerr << "Input file could not be opened" << endl;
		exit(1);
	}
	
	ofstream outfile("file.out",ios::app);
	if( !outfile ){
		cerr << "Output file could not be opened" << endl;
		exit(2);
	} 
	outfile << "\t" << left << "BMI    Category" << endl;

	while( openfile >> h >> w ){
		if( h==0 || w==0 ){
			break;
		}
		BMI.setHeight(h);
		BMI.setWeight(w);
		outfile << "\t" << left << fixed << setw(7) << setprecision(2) << BMI.getBMI() << BMI.getCategory( BMI.getBMI() ) << endl;
	}
	return 0;
}

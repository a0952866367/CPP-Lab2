#include<fstream>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;
class BodyMassIndex{
public:
	void setHeight(float h);
	void setWeight(float w);
	float getHeight();
	float getWeight();
	float getBMI();
	string getCategory(float bmi);
private:
	float height;
	float weight;
};

#include "bmi.h"
void BodyMassIndex::setHeight(float h){
	height = h;
}
void BodyMassIndex::setWeight(float w){
	weight = w;
}
float BodyMassIndex::getHeight(){
	return height;
}
float BodyMassIndex::getWeight(){
	return weight;
}
float BodyMassIndex::getBMI(){
	float BMI;
	BMI = (10000*weight) / (height*height);
	return BMI;
}
string BodyMassIndex::getCategory(float bmi){
               if( bmi<15 )
                        return "Very Severely Underweight";
               else if( bmi>=15 && bmi<16 )
                        return "Severely Underweight";
               else if( bmi>=16 && bmi<18.5 )
                        return "Underweight";
               else if( bmi>=18.5 && bmi<25 )
                        return "Normal";
               else if( bmi>=25 && bmi<30 )
                        return "Overweight";
               else if( bmi>=30 && bmi<35 )
                        return "Obese Class I (Moderately Obese)";
               else if( bmi>=35 && bmi<40 )
                        return "Obese Class II (Severely Obese)";
               else if( bmi>=40 )
                        return "Obese class III (Very Severely Obese)";
}

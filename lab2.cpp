#include "lab2.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//constructor
BMI::BMI(){
	setWeight(0);
	setHeight(0);
}
void BMI::setWeight(float weight){
	if(weight!=0)	
		weight=weight;
}
void BMI::setHeight(float height){
	if(height!=0)
		height=height;
}
void BMI::setBMI(float BMInu){
	BMInu=BMInu;
}
float BMI::getWeight(){
	return weight;
}
float BMI::getHeight(){
	return height;
}

float BMI::getBMI(){
	return BMInu;
}

float BMI::BMI_Cal(float h,float w){
	if(h==0 or w==0)
		exit(1);
	else
		BMInu=(w/h/h)*10000;
	setBMI(BMInu);
	return BMInu;
}
string BMI::categorize(float BMI){
	if( BMI<15 )
		category="Very severly underweight\n";
	else if( (BMI>=15) && (BMI<16) )
		category="Severly underweight\n";
	else if( (BMI>=16) && (BMI<18.5) )
		category="Underweight\n";
	else if( (BMI>=18.5) && (BMI<25) )
		category="Normal\n";
	else if( (BMI>=25) && (BMI<30) )
		category="Overweight\n";
	else if( (BMI>=30) && (BMI<35) )
		category="Obese Class I (Moderately obese)\n";
	else if( (BMI>=35) && (BMI<40) )
		category="Obese Class II (Severely obese)\n";
	else if( BMI>=40 )
		category="Obese Class III (Very severely obese)\n";

	return category;

}

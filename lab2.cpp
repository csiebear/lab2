#include "lab2.h"
#include <iostream>
#include <string>

using namespace std;

void BMI::setWeight(int weight){
	weight=weight;
}
void BMI::setHeight(int height){
	height=height;
}
int BMI::getWeight(){
	return weight;
}
int BMI::getHeight(){
	return height;
}

float BMI::BMI_Cal(){
	BMI=(weight/height/height)*10000;
	return BMI;
}
string BMI::categorize(float BMI){
	if( BMI<15 )
		category="Very severly underweight\n";
	if( (BMI>=15) && (BMI<16) )
		category="Severly underweight\n";
	if( (BMI>=16) && (BMI<18.5) )
		category="Underweight\n";
	if( (BMI>=18.5) && (BMI<25) )
		category="Normal\n";
	if( (BMI>=25) && (BMI<30) )
		category="Overweight\n";
	if( (BMI>=30) && (BMI<35) )
		category="Obese Class I (Moderately obese\n";
	if( (BMI>=35) && (BMI<40) )
		category="Obese Class II (Severely obese)\n";
	if( BMI>=40 )
		category="Obese Class III (Very severely obese)\n";
	return category;

}

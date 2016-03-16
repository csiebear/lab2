#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BMI{
	public:
		BMI();	
		void setWeight(float weight);//using the set function corresponding to the member data
		void setHeight(float height);
		void setBMI(float BMInu);
		float getWeight();
		float getHeight();
		float getBMI();
		float BMI_Cal(float h,float w);
		string categorize(float BMInu);
	private:
	//the member data
		float weight;
		float height;
		float BMInu;
		string category;
};

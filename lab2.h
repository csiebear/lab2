#include <iostream>
#include <fstream>

using namespace std;

class BMI{
	public:
		void setWeight(int weight);//using the set function corresponding to the member data
		void setHeight(int height);
		int getWeight();
		int getHeight();
		float BMI_Cal();
		string category(float BMI);
	private:
	//the member data
		int weight;
		int height;
		float BMI;
};

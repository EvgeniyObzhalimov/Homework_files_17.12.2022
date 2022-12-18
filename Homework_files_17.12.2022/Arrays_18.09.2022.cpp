#include<iostream>


#include"Header.h"
struct PowerPlant {
	char name[20]={"Reftinskaya GRES"};
	
	};
	
	
	


struct oper_data {
	double coal{10000};
	my_struct1 P;
	my_struct2 D;
	double result = P.power / coal;
	};

	
struct general_information {
	oper_data review;
	int unitnumber{10};

};

int main() {
	setlocale(LC_ALL, "Russian");
	PowerPlant a;
	oper_data b;
	general_information c;
	my_struct1 x;
	my_struct2 y;
	my_struct3 z;

	std::cout << "\nNumber of units: "<<c.unitnumber;
	std::cout << "\nPowerPlant: "<<a.name;
	std::cout << "\nPowerPlant capacity: " << y.a.power;

	std::cout << "\n Tones of coal per MWt: " << b.result;
	std::cout << "\nProfit, rubles per each MWt: " << z.Plant;








	return 0;


}



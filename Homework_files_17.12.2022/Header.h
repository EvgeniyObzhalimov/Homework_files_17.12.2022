#pragma once

struct my_struct1 {
	int power{3800};
	

};
struct my_struct2 {
	my_struct1 a;
	char Mwt[5]={"MWt"};
};
struct my_struct3 {
	
	my_struct1 p;
	int cost{1000};
	int Plant=p.power*cost;
	
	
};
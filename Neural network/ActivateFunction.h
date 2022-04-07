#pragma once
#include <iostream>
enum activateFunc {sigmoid = 1, ReLU, thx};
class ActivateFunction
{
	activateFunc actFunc;//обЪект перечисляемого типа
public:
	void set();
	void use(double* value,int n);
	void useDer(double* value,int n);//производная
	double useDer(double value);
};


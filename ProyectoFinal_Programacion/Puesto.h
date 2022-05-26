#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Puesto{
private: int idpuesto=0;
public: string puesto;

public:
	Puesto() {
	}
	Puesto(int idpue,string pue) {
		idpuesto = idpue;
		puesto = pue;
	}
};


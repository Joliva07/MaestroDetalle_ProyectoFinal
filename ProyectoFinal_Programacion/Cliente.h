#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Cliente : public Persona {

private:
	int nit = 0, idcliente = 0;

public: string correo, fechaingreso;

public:
	Cliente() {
	}
	Cliente(int idcl, string nom, string ape, int n, int gen, int tel, string cor, string fechain, string dir) :Persona(nom, ape, dir, gen, tel) {
		idcliente = idcl;
		nit = n;
		correo = cor;
		fechaingreso = fechain;
	}

};

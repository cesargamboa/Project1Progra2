#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
int main()
{
	EmpleadoBase empleado;
	Lista nueva;

	nueva.AddNode(&empleado);

	nueva.imprimirResultados();

}
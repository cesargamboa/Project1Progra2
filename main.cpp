#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include <iostream>
int main()
{
	EmpleadoBase empleado;
	Empresa systemsCompany;
	systemsCompany.agregarEmpleado(&empleado);
	systemsCompany.mostrarListaDeEmpleados();
	
	return 0;

}
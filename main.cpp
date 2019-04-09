#include <iostream>
#include "EmpleadoBase.h"
#include "Lista.h";
#include "Empresa.h";
#include "EmpleadoPlanilla.h"
#include "EmpleadoServiciosProfesionales.h"
#include <iostream>
int main()
{
	EmpleadoPlanilla empleado;
	EmpleadoServiciosProfesionales empleado2;

	Empresa company("Smart-System", "Heredia", "666-666-6666");
	company.agregarEmpleado(&empleado);
	company.agregarEmpleado(&empleado2);
	company.mostrarListaDeEmpleados();
	
	return 0;

}
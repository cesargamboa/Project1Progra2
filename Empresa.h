#pragma once
#include <string>
#include "Lista.h";
#include "EmpleadoBase.h";

class Empresa
{
private:
	std::string nombre;
	std::string direccion;
	std::string telefono;
	Lista listaEmpleados;

public:
	Empresa(std::string, std::string, std::string);
	void agregarEmpleado(EmpleadoBase* empleado);
	// segun el enunciado, unicamente estos atributos se pueden actualizar
	void setNuevoTelefono(std::string);
	void setNuevaDireccion(std::string);
	void mostrarListaDeEmpleados();
	~Empresa();
};


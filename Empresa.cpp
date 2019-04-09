#include "Empresa.h"
#include "EmpleadoBase.h";
#include <iostream>
#include <string>

Empresa::Empresa(std::string name, std::string phone, std::string address):
	nombre(name), telefono(phone), direccion(address)
{
}


Empresa::~Empresa()
{
}
void Empresa::agregarEmpleado(EmpleadoBase* empleado) {
	std::cout << "intentando agregar";
	listaEmpleados.AddNode(empleado);
}
void Empresa::mostrarListaDeEmpleados() {
	std::cout << "Ingresando a lista de empleados";
	listaEmpleados.imprimirResultados();
}
void Empresa::setNuevaDireccion(std::string address) {
	direccion = address;
}
void Empresa::setNuevoTelefono(std::string phone) {
	telefono = phone;
}
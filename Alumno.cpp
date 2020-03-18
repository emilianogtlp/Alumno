#include "Alumno.h"

Alumno::Alumno()
{
	nombre = "";
	matricula = "";
	nota1 = 0;
	nota2 = 0;
	nota3 = 0;
}

Alumno::Alumno(std::string no, std::string ma, float not1, float not2, float not3)
{
	nombre = no;
	matricula = ma;
	nota1 = not1;
	nota2 = not2;
	nota3 = not3;
}

void Alumno::setNombre(std::string no)
{
	nombre = no;
}

void Alumno::setMatricula(std::string ma)
{
	matricula = ma;
}

void Alumno::setNota1(float not1)
{
	nota1 = not1;
}

void Alumno::setNota2(float not2)
{
	nota2 = not2;
}

void Alumno::setNota3(float not3)
{
	nota3 = not3;
}

std::string Alumno::getNombre()
{
	return nombre;
}

std::string Alumno::getMatricula()
{
	return matricula;
}

float Alumno::getNota1()
{
	return nota1;
}

float Alumno::getNota2()
{
	return nota2;
}

float Alumno::getNota3()
{
	return nota3;
}

float Alumno::calcpromedio()
{
	float promedio = (nota1 + nota2 + nota3) / 3;
	return promedio;
}

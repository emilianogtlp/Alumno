#pragma once
#include <string>
class Alumno
{
public:
	Alumno();
	Alumno(std::string no, std::string ma, float not1, float not2, float not3);
	void setNombre(std::string no);
	void setMatricula(std::string ma);
	void setNota1(float not1);
	void setNota2(float not2);
	void setNota3(float not3);
	std::string getNombre();
	std::string getMatricula();
	float getNota1();
	float getNota2();
	float getNota3();
private:
	std::string nombre;
	std::string matricula;
	float nota1, nota2, nota3;
};


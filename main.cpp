#include <iostream>
#include "Alumno.h"
using namespace std;
int main()
{
	string nombre, matricula;
	float nota1, nota2, nota3;
	Alumno alumno1;
	cout << "Ingrese el nombre del alumno: " << endl;
	getline(cin, nombre);
	cout << "Ingrese la matricula del estudiante: " << endl;
	cin >> matricula;
	cout << "Ingrese las notas del primer, segundo y tercer parcial respectivamente:" << endl;
	cin >> nota1;
	cout << endl;
	cin >> nota2;
	cout << endl;
	cin >> nota3;
	alumno1.setNombre(nombre);
	alumno1.setMatricula(matricula);
	alumno1.setNota1(nota1);
	alumno1.setNota2(nota2);
	alumno1.setNota3(nota3);
	return 0;
}

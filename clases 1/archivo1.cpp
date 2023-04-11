#include<iostream>

using namespace std;

//En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente :
//a) Ingresar Nombre y Nota de cada alumno(almacenar los datos en dos vectores paralelos)
//b) Realizar un listado que muestre los nombres, notas y condición del alumno.En la condición, colocar "Muy Bueno" 
//si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
//c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

class alumnos {
private:
	int notas[4];
	char nombres[4][40];
public:
	void cargaNotasNombre();
	void listarCondiciones();
};
void alumnos::cargaNotasNombre() {
	for (int i = 0; i < 4; i++)
	{
		cout << "Ingrese el nombre del alumno:\n";
		cin.getline(nombres[i], 40);
		cout << "\nIngrese la nota del alumno:\n";
		cin >> notas[i];
		cin.get();
	}
}
void alumnos::listarCondiciones() {
	int muyBueno = 0;
	for (int i = 0; i < 4; i++)
	{
		if (notas[i]>=8)
		{
			cout << "\nAlmuno: " << nombres[i];
			cout << "\nNota: " << notas[i];
			cout << "\nCondicion: Muy Bueno";
			muyBueno += 1;
		}
		else
		{
			if (4<=notas[i]<=7)
			{
				cout << "\nAlmuno: " << nombres[i];
				cout << "\nNota: " << notas[i];
				cout << "\nCondicion: Bueno";
			}
			else
			{
				cout << "\nAlmuno: " << nombres[i];
				cout << "\nNota: " << notas[i];
				cout << "\nCondicion: Insuficiente";
			}
		}
	}
	cout << "Alumnos que tienen una condicion Muy Buena: " << muyBueno;

}
int main() {
	alumnos pAno1;
	pAno1.cargaNotasNombre();
	pAno1.listarCondiciones();
	return 0;
}
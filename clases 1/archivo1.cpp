#include<iostream>

using namespace std;


class productos {
private:
	float precios[5];
	char nombres[5][40];
public:
	void cargarProductos();
	void mayorAlPrimero();
};
void productos::cargarProductos() {
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese el nombre del primer producto:\n";
		cin.getline(nombres[i], 40);
		cout << "\nIngrese el Valor del producto:\n";
		cin >> precios[i];
		cin.get();
	}
}
void productos::mayorAlPrimero() {
	int mayor = 0;
	for (int i = 0; i < 5; i++)
	{
		if (precios[0] < precios[i])
		{
			mayor += 1;
		}
	}
	cout << "\nEsta cantidad de productos son de mayor valor que el primero:" << mayor;
	cin.get();
	cin.get();
}
//Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios
//.Definir dos vectores paralelos.Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.
int main() {
	productos p1;
	p1.cargarProductos();
	p1.mayorAlPrimero();

	return 0;
}
#include<iostream>

using namespace std;
//Cargar un vector de 5 elementos enteros.imprimir el menor y un mensaje si se repite dentro del vector.
class elementos {
private:
	int elemEnteros[5];
	int menor;
	int menorRepite(int posicion);
public:
	void carga();
	void buscarMenor();

};
void elementos::carga() {
	for (int i = 0; i < 5; i++)
	{
		cout << "\nIngrese el valor del entero: ";
		cin >> elemEnteros[i];
		cin.get();
	}
}
void elementos::buscarMenor() {
	menor = elemEnteros[0];
	int pos = 0;
	for (int i = 0; i < 5; i++)
	{
		if (elemEnteros[i]<menor)
		{
			menor = elemEnteros[i];
			pos = i;
		}
	}
	cout << "\nEl menor valor es: " << menor;
	int repite = menorRepite(pos);
	cout << "\nEl menor se repite: " << repite << " veces en el array";

}
int elementos::menorRepite(int posicion) {
	int repite = 0;
	for (int i = 0; i < 5; i++)
	{
		if (elemEnteros[posicion]==elemEnteros[i] && i !=posicion)
		{
			repite += 1;
		}
	}
	return repite;
}
int main() {
	elementos e1;
	e1.carga();
	e1.buscarMenor();

	return 0;
}
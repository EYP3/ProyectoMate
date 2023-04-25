#pragma once
#include<vector>
#include<string>
using namespace std;
class Interfaz
{
private:
	vector <string> A;
	vector <string> B;
	vector <string> C;
	string Origen, Destino;
public:
	Interfaz() {
		A = { "Lima","Piura","Chiclayo","Trujillo","Iquitos", "Cusco","PuertoMaldonado", "Juliaca", "Arequipa" };
		B = { "CiudadMex", "Cancun", "Habana", "SantoDomin", "PuntaCana", "SanJuan", "CiudadGuate", "Flores", "SanPedro", "Belice", "Roatan", "SanSalvador", "LaCeiba", "Tegucigalpa", "Liberia", "Managua", "SanJose", "CiudaddePan", "Caracas", "Medellin", "Bogota", "Cali", "Quito", "Guayaquil", "Lima" };
		C = { "Bogota",	"Villavicencio", "Florencia", "Neiva", "Popayán", "Pasto", "Tumaco", "Cali", "Ibagué", "Armenia", "Pereira", "Manizales", "Medellin", "Monteria", "Cartagena", "SanAndres", "Barranquilla", "SantaMarta", "Riohacha", "Valledupar", "Cucuta", "Bucaramanga", "Barrancamermeja", "Yopal", "Leticia" };

		Origen = "";
		Destino = "";
	}
	~Interfaz();

	void setDestino(string a) {
		Destino = a;
	}
	void setOrigen(string a) {
		Origen = a;
	}
	string getDestino() {
		return Destino;
	}
	string getOrigen() {
		return Origen;
	}
	vector<string> getA() {
		return A;
	}
	string getItemA(int x) {
		return A[x];
	}
	string getItemB(int x) {
		return B[x];
	}
	vector<string> getB() {
		return B;
	}
	string getItemC(int x) {
		return C[x];
	}
	vector<string> getC() {
		return C;
	}

};
#pragma once
#include<vector>
#include<string>
using namespace std;
class Poto
{
private:
	vector <string> A;
	vector <string> B;
	string Origen, Destino;
public:
	Poto() {
		A = { "Lima","Piura","Chiclayo","Trujillo","Iquitos", "Cusco","PuertoMaldonado", "Juliaca", "Arequipa" };
		B = { "CiudadMex", "Cancun", "Habana", "SantoDomin", "PuntaCana", "SanJuan", "CiudadGuate", "Flores", "SanPedro", "Belice", "Roatan", "SanSalvador", "LaCeiba", "Tegucigalpa", "Liberia", "Managua", "SanJose", "CiudaddePan", "Caracas", "Medellin", "Bogota", "Cali", "Quito", "Guayaquil", "Lima" };
		Origen = "";
		Destino = "";
	}
	~Poto();

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

};
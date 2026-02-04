#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string archivo = "doc.txt";
	string Texto = "";
	cout << "Inserte texto para el archivo:" << endl;
	getline(cin, Texto);
	Texto = Texto + "\n";

	fstream my_txt;
	my_txt.open(archivo, ios::app);
	my_txt.write(Texto.c_str(), Texto.size());
	my_txt.close();

	return EXIT_SUCCESS;
}


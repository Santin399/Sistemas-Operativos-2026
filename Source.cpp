#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string nombre_archivo = "doc.txt";
	string a_escribir = "";
	cout << string(20, '-') << endl;
	cout << "Texto para el archivo:" << endl;
	getline(cin, a_escribir);
	a_escribir = a_escribir + "\n";

	fstream my_txt;
	my_txt.open(nombre_archivo, ios::app);
	my_txt.write(a_escribir.c_str(), a_escribir.size());
	my_txt.close();

	return EXIT_SUCCESS;
}


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string archivo = "doc.txt";
    string texto;

    cout << "Inserte texto para el archivo:" << endl;
    getline(cin, texto);
    texto += "\n";

    fstream my_txt;
    my_txt.open(archivo, ios::out | ios::app);

    if (!my_txt.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    my_txt.write(texto.c_str(), texto.size());
    my_txt.close();

    return 0;
}

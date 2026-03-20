#include <iostream>
using namespace std;

struct Nodo {
    string apellido;
    Nodo* siguiente;
};
int main() {
    
    Nodo* nodo1 = new Nodo();
    Nodo* nodo2 = new Nodo();

    nodo1->apellido = 'marin';
    nodo1->siguiente = nodo2;
    nodo2->apellido = 'lopez';
    nodo2->siguiente = nullptr; 

    cout << "Nodo 1: " << nodo1->apellido << endl;
    cout << "Nodo 2: " << nodo1->siguiente->apellido << endl;
    
    while

  
    delete nodo1;
    delete nodo2;
    return 0;
}

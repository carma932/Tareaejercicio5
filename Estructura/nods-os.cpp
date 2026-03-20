#include <iostream>
using namespace std;

struct Nodo {
    string nombre;
    Nodo* siguiente; 
};

int main() {
   
    Nodo* head = new Nodo{"Carlos", nullptr};
    Nodo* nodo2 = new Nodo{"Edson", nullptr};
    Nodo* nodo3 = new Nodo{"Ernesto", nullptr};
    Nodo* nodo4 = new Nodo{"Ian", nullptr};
    Nodo* nodo5 = new Nodo{"Luis", nullptr};

    
    head->siguiente = nodo2;
    nodo2->siguiente = nodo3;
    nodo3->siguiente = nodo4;
    nodo4->siguiente = nodo5;
    nodo5->siguiente = nullptr; 

    // Recorrer y mostrar todos los valores
    Nodo* actual = head;
    while (actual != nullptr) {
        cout << actual->nombre << endl;
        actual = actual->siguiente;
    }

    // Liberar memoria
    delete head;
    delete nodo2;
    delete nodo3;
    delete nodo4;
    delete nodo5;

    return 0;
}

//Saúl Iván Hernández Enríquez - 21310395
//Tarea 4

#include <iostream>

#include "Shape.h"
#include "Menu.h"
#include "Canva.h"

using namespace std;

int main() {
    bool finished = false;
    int option = 0;

    Canva canva;
    Shape* shape = nullptr;

    string elements[4] = {"Square", "Rectangle", "Triangle", "Equilateral triangle"};
    Menu mainMenu(4, elements);

    while(true) {
        mainMenu.showMenu();
        cin >> option;

        if(option == 5)
            break;

        else if(option < 1 || option > 5)
            cout << "Invalid option" << endl << endl;
 
        else {
            shape = mainMenu.selectedOption(option);
            canva.printShape(shape);
            delete shape;
        }
    }
}

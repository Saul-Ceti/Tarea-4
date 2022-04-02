#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;

class EquilateralTriangle : public Shape {
    public:
        EquilateralTriangle() {
            cout << "Equilateral triangle created" << endl;
        }
        ~EquilateralTriangle() {
            cout << "Equilateral triangle destroyed" << endl;
        }
        void draw() {
            for(int i = 1; i <= base; i ++) {
                for(int j = 0; j < base - i; j ++) {
                    cout << " ";
            }
            for(int j = 0; j < i; j ++) {
                cout << " *";
            }
        cout << endl;
        }
    }
};
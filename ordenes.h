//
// Created by Jean Pierre on 28/11/2019.
//

#ifndef MEEEEPRJJT_ORDENES_H
#define MEEEEPRJJT_ORDENES_H


#include "c_Robot.h"
#include <fstream>
#include <iostream>
#include <utility>
#include "tipos_g.h"
using namespace std;
class ordene_t {
private:
    c_Robot rob1;
    c_Robot rob2;
    c_Robot rob3;
public:
    explicit ordene_t(c_Robot _rob,c_Robot _rob2,c_Robot _rob3);
    void guardar_ordenes(c_Robot &rob);
    void mostrar_odenes();

};


#endif //MEEEEPRJJT_ORDENES_H

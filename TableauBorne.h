#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
private:
    float max;
    float min;
public:
    TableauBorne(int, float, float);
    float operator[](int i) const;
    ~TableauBorne();
};


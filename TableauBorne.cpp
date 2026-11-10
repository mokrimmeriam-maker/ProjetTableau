#include "TableauBorne.h"
#include<iostream>
using namespace std;
TableauBorne::TableauBorne(int taille, float min, float max): Tableau(taille)
{
	this->min = min;
	this->max = max;
}
float TableauBorne::operator[](int i) const {
	return Tableau::Tab[i];
}

TableauBorne::~TableauBorne()
{
	cout << "le destructeur de la class tableauBorne" << endl;
}


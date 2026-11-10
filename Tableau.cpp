#include "Tableau.h"
#include <iostream>
#include<cstdlib>
using namespace std;
Tableau::Tableau(int taille)
{
	this->taille = taille;
	this->Tab = new float[taille];
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Tab = new float[taille];
	for (int i = 0;i < taille;i++) {
		this->Tab[i] = T.Tab[i];
	}
}

Tableau& Tableau::operator=(Tableau& T)
{
	if (this != &T) {
	delete[] Tab;
	this->taille = T.taille;
	this->Tab = new float[taille];
	for (int i = 0;i < taille;i++) {
		this->Tab[i] = T.Tab[i];
	}
	}return *this;
}

float& Tableau::operator[](int i)
{
	if (i >= 0 && i < this->taille) {
		return this->Tab[i];
	} exit(-1);
}

void Tableau::afficher() const
{
	cout << "la taille est :" << this->taille << endl;
	for (int i = 0;i < taille; i++) {
		cout << Tab[i] << endl;
	}
}

Tableau::~Tableau()
{
	delete[] Tab;
}

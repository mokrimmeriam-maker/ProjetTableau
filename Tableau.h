#pragma once
class Tableau
{
private:
	int taille;
protected:
	float* Tab;
public:
	Tableau(int);
	Tableau(const Tableau& T);
	Tableau& operator=(Tableau& T);
	float& operator[](int i);
	void afficher() const;
	~Tableau();
};


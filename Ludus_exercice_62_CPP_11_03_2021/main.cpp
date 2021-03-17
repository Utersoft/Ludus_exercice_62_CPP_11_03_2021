#include "CPoint.h"
#include <stdio.h>
#include <iostream>


using namespace std;

int main() {

	//CPoint p(2.2, 4.4);

	/*p.affiche();

	p.deplace(1.0, 1.0);

	p.affiche();*/

	/*printf("L'abscisse : %f\nL'ordonnee : %f\n", p.abscisse(), p.ordonne());
	
	p.deplace(1.0, 1.0);

	printf("L'abscisse : %f\nL'ordonnee : %f\n", p.abscisse(), p.ordonne());
	*/

	/*p.homothetie(5);
	p.rho();
	p.rotation(5);
	p.affiche();*/


	vecteur3d v1(1.0, 1.0, 1.0);
	vecteur3d v2(2.0, 1.0, 1.0);

	if (v1.coincide(v2)) {
		cout << "oui" << endl;
	}
	else {
		cout << "non" << endl;
	}
	
	
	//Affichage du vecteur
	v1.afficheVecteur();

	//Création du vecteur v3 qui contient la somme des vecteurs v1 et v2
	vecteur3d v3 = v1.somme2Vecteurs(v2);
	//Résultat du produit scalaire des vecteurs v1 et v2
	float flt_scal = v1.produitscalaire2Vecteurs(v2);

	v3.afficheVecteur();
	cout << "Produit scalaire : " << flt_scal << endl;
	


	return 0;

}
#include "CPoint.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
#define PI 3.14

using namespace std;

int CPoint::n_cpt = 0;

CPoint::CPoint(float flt_x, float flt_y)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
	this->n_cpt++;
}

void CPoint::deplace(float val_x, float val_y)
{
	this->flt_x = this->flt_x + val_x;
	this->flt_y = this->flt_y + val_y;
}

void CPoint::affiche()
{
	//printf("Les coordonnees sont : X = %f, Y = %f.\n", this->flt_x, this->flt_y);
	cout << "Les coordonnées sont : X = " << this->flt_x << ", Y = " << this->flt_y << "." << endl;
	cout << "Il y a " << this->n_cpt << "points." << endl;
}

float CPoint::abscisse()
{
	return this->flt_x;
}

float CPoint::ordonne()
{
	return this->flt_y;
}

void CPoint::homothetie(float flt_k)
{
	this->flt_x *= flt_k;
	this->flt_y *= flt_k;
}

void CPoint::rotation(float flt_angle)
{
	flt_x = flt_x * cos(flt_angle * (PI / 180)) - flt_y * sin(flt_angle * (PI / 180));
	flt_y = flt_x * sin(flt_angle * (PI / 180)) + flt_y * cos(flt_angle * (PI / 180));
	std::cout << flt_x << "  " << flt_y << std::endl;
}

float CPoint::rho()
{
	return sqrt(flt_x * flt_x + flt_y * flt_y);
}

float CPoint::theta()
{
	return atan(flt_y / flt_x);
}

/*vecteur3d::vecteur3d(float flt_x, float flt_y, float flt_z):flt_x(flt_x), flt_y(flt_y), flt_z(flt_z)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
	this->flt_z = flt_z;
}*/

float vecteur3d::getX()const
{
	return this->flt_x;
}

float vecteur3d::getY()const
{
	return this->flt_y;
}

float vecteur3d::getZ()const
{
	return this->flt_z;
}

void vecteur3d::setX(float flt_x)
{
	this->flt_x = flt_x;
}

void vecteur3d::setY(float flt_y)
{
	this->flt_y = flt_y;
}

void vecteur3d::setZ(float flt_z)
{
	this->flt_z = flt_z;
}

void vecteur3d::setXYZ(float flt_x, float flt_y, float flt_z)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
	this->flt_z = flt_z;
}

/*bool vecteur3d::coincide(vecteur3d v1)const
{
	if (v1.flt_x == this->flt_x && v1.flt_y == this->flt_y && v1.flt_z == this->flt_z) {
		return true;
	}
	else {
		return false;
	}
}

bool vecteur3d::coincide(vecteur3d* v1)const
{
	if (v1->flt_x == this->flt_x && v1->flt_y == this->flt_y && v1->flt_z == this->flt_z) {
		return true;
	}
	else {
		return false;
	}
}*/

bool vecteur3d::coincide(vecteur3d& v1)const
{
	if (v1.flt_x == this->flt_x && v1.flt_y == this->flt_y && v1.flt_z == this->flt_z) {
		return true;
	}
	else {
		return false;
	}
}

float vecteur3d::getNorme() const
{
	return sqrt(this->flt_x * this->flt_x + this->flt_y * this->flt_y + this->flt_z * this->flt_z);
}

vecteur3d vecteur3d::normax(vecteur3d v1)
{
	if (v1.getNorme() > this->getNorme())
		return *this;
	else
		return v1;
}

void vecteur3d::afficheVecteur() const
{
	cout << "<" << this->flt_x << "," << this->flt_y << "," << this->flt_z << ">" << endl;
}

vecteur3d vecteur3d::somme2Vecteurs(vecteur3d &v1) const
{
	vecteur3d bateau;

	bateau.flt_x = v1.flt_x + this->flt_x;
	bateau.flt_y = v1.flt_y + this->flt_y;
	bateau.flt_z = v1.flt_z + this->flt_z;

	return bateau;
}

float vecteur3d::produitscalaire2Vecteurs(vecteur3d &v1) const
{
	float flt_scal;

	flt_scal = v1.flt_x * this->flt_x + v1.flt_y * this->flt_y + v1.flt_z * this->flt_z;

	return flt_scal;
}

/*vecteur3d::~vecteur3d()
{
	delete this;
}*/

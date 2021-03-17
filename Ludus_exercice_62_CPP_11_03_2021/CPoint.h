#pragma once


class CPoint {
	
private :

	float flt_x;
	float flt_y;
	static int n_cpt;

public :

	CPoint(float flt_x = 0.0, float flt_y = 0.0);

	void deplace(float val_x, float val_y);

	void affiche();

	float abscisse();

	float ordonne();

	void homothetie(float flt_k);

	void rotation(float flt_angle);

	//Il s'agit du rayon, la longeur de la droite, l'hypothènuse
	float rho();

	float theta();

};


class vecteur3d {

private:
	//Données membres
	float flt_x;
	float flt_y;
	float flt_z;

public:
	//constructeurs

	//vecteur3d();
	//vecteur3d(float flt_x = 0.0, float flt_y = 0.0, float flt_z = 0);
	inline vecteur3d(float flt_x = 0.0, float flt_y = 0.0, float flt_z = 0.0) {
		this->flt_x = flt_x;
		this->flt_y = flt_y;
		this->flt_z = flt_z;
	}
	


	//Fonction membre
	float getX()const;
	float getY()const;
	float getZ()const;

	void setX(float flt_x);
	void setY(float flt_y);
	void setZ(float flt_z);

	void setXYZ(float flt_x, float flt_y, float flt_z);

	/*bool coincide(vecteur3d v1)const;

	bool coincide(vecteur3d *v1)const;*/

	bool coincide(vecteur3d &v1)const;

	float getNorme()const;

	vecteur3d normax(vecteur3d v1);

	//vecteur3d normax(vecteur3d* v1);
	
	//vecteur3d normax(vecteur3d &v1);

	void afficheVecteur()const;

	vecteur3d somme2Vecteurs(vecteur3d &v1)const;

	float produitscalaire2Vecteurs(vecteur3d &v1)const;
		


	//destructeur

	//~vecteur3d();

};
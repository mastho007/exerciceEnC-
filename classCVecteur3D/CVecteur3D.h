

class CVecteur3D
{
public:

	//----------------------------------
	//c'tor et d'tor
	//----------------------------------
	CVecteur3D(float fC1 = 0.0, float fC2 = 0.0, float fC3 = 0.0);

    CVecteur3D(const CVecteur3D &oVecteur);

	virtual ~CVecteur3D();
	

	//----------------------------------
	//Surcharge des opérateurs == != + et *
	//----------------------------------
	bool operator == (const CVecteur3D &oVecteur) const;
	bool operator != (const CVecteur3D &oVecteur) const;
	
	//on ajoute la logique de fonction friend qui surcharge les opérateurs + et *
	friend CVecteur3D operator + (const CVecteur3D &oVecteur1, const CVecteur3D &oVecteur2);
	friend float operator * (const CVecteur3D &oVecteur1, const CVecteur3D &oVecteur2);
	
	//----------
	//GETTERS
	//----------
	float getX();
	float getY();
	float getZ();
	

private:
	//Un vecteur possède 3 coordonnées X, Y et Z
	float m_fX;
	float m_fY;
	float m_fZ;
};




﻿//kereső algoritmushoz molekula class
class init_molekula {
public:
	int x, y, z; //koordináták
	//bool kell; //részt vesz-e az adott logikai függvényben
	bool ter; //térrel terhelt-e a molekula az adott helyen
	bool kimenet; //kimenet-e az adott molekula

	double init_dipole;		//első futás után dipol moment
	double desired[2];		//desired vektor
	double *actual;			//actual dipole érték
	double *szomszedok;		//molekula szomszédjai
	int	   bemenet_szam;	//melyik bemenet az adott mulekula

	//alap konstruktor
	init_molekula();

	//konstruktor
	void initialize_molekula(int _x, int  _y, int  _z, bool _ter, int _bemenet_szam, bool _kimenet,double *_szomszedok);

	//overload
	void initialize_molekula(int _x, int  _y, int  _z, bool _ter, int _bemenet_szam, bool _kimenet);

	//tér setelése molekulára
	void set_ter_mol();

	//dipól lekérése
	double get_dipole();

	//init_dipole set
	void set_init_dipole();

	//desired vektor megadása
	void set_desired();

	//tér nagyság megadása
	void set_ter(double terMag);

	//set actual dipole value
	void set_actual();

	//update actual dipole value
	void update_actual(int sor);

	//reset dipole moment
	void reset_dipole(double dipole);
};

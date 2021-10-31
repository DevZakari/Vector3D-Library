#include "pch.h"
#include "Vector3D.h"
#include "assert.h"
#include <string>
using namespace Geom;
using namespace std;
Vector3D::Vector3D(float x = 0, float y = 0, float z = 0)
{
	this->Vect[0] = x;
	this->Vect[1] = y;
	this->Vect[2] = z;
}

float Vector3D::at(unsigned int indice) const
{
	assert(indice >= 0 && indice < 3); // debug
	try {
		if (indice < 0 || indice >= 3) throw "rang error";

	}
	catch (char* e)
	{
		cout << e << endl;
	}
	return this->Vect[indice];
}

bool Vector3D::operator==(const Vector3D& vect) const
{
	bool res = true;
	for (int i = 0; i < 3; i++)
	{
		res = res && (this->at(i) == vect.at(i));
		// cette instruction set ? ne pas faire des it?ration de plus si res est faux :
		if (res == false) break;
	}
	return res;
}

bool Vector3D::operator!=(const Vector3D& vect) const
{
	bool res = !(*this == vect);
	return res;
}


float& Vector3D::operator[](unsigned int indice)
{
	assert(indice >= 0 && indice < 3); // debug
	// release 
	try {
		if (indice < 0 || indice >= 3) throw "rang error";
		return this->Vect[indice];
	}
	catch (char* e)
	{
		cout << e << endl;
	}
}

Vector3D& Geom::Vector3D::operator+(const Vector3D& vect)
{
	Vector3D* newVect = new Vector3D(0, 0, 0);
	for (int i = 0; i < 3; i++)
	{
		newVect->Vect[i] = this->Vect[i] + vect.Vect[i];
	}
	return *newVect;
}

Vector3D& Geom::Vector3D::operator-(const Vector3D& vect)
{
	Vector3D* newVect = new Vector3D(0, 0, 0);
	for (int i = 0; i < 3; i++)
	{
		newVect->Vect[i] = this->Vect[i] - vect.Vect[i];
	}
	return *newVect;
}

//
Vector3D& Geom::Vector3D::operator*(const Vector3D& vect)
{
	Vector3D* newVect = new Vector3D(0, 0, 0);
	for (int i = 0; i < 3; i++)
	{
		newVect->Vect[i] = this->Vect[i] * vect.Vect[i];
	}
	return *newVect;
}

void Geom::Vector3D::MultipParNombre(float number)
{
	for (int i = 0; i < 3; i++)
	{
		this->Vect[i] = this->Vect[i] * number;
	}
}

void Geom::Vector3D::DivisionParNombre(float number)
{
	//assert(number != 0); // debug
	// release 
	try {
		if (!number)
		{
			string err = "\n\t ***** Impossible de diviser par 0 *****  \n";
			throw err;
		}
		for (int i = 0; i < 3; i++)
		{
			this->Vect[i] = this->Vect[i] / number;
		}
	}
	catch (string err)
	{
		cout << err;
	}
}



void Vector3D::Print()const
{
	for (int i = 0; i < 3; i++)
	{
		cout << "\t\t vect[" << i << "] = " << this->at(i) << endl;
	}
}

void Geom::afficher(Vector3D& v)
{
	for (int i = 0; i < 3; i++)
	{
		cout << endl << "vect[" << i << "] = " << v.Vect[i] << endl;
	}
}

#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace Geom {
	class Vector3D
	{
	private:
		float Vect[3];
	public:
		Vector3D(float x, float y, float z);
		Vector3D(const Vector3D& vect) = delete;
		/*Vector3D& operator = (const Vector3D&) = delete;*/

		float at(unsigned int indice)const;
		// operators :
		bool operator == (const Vector3D& vect)const;
		bool operator != (const Vector3D& vect)const;
		float& operator[](unsigned int indice);
		Vector3D& operator + (const Vector3D& vect);
		Vector3D& operator - (const Vector3D& vect);
		Vector3D& operator * (const Vector3D& vect);
		void MultipParNombre(float number);
		void DivisionParNombre(float number);

		// friend method : 
		friend void afficher(Vector3D& v);
		void Print()const;
	};
	void afficher(Vector3D& v);
};


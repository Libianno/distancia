#include <iostream>
#include <cmath>
#include "ponto.cpp"
using namespace std;

class Linha{
	public:
		void setPonto1(Ponto ponto1_)
		{
			ponto1 = ponto1_;
		}
		void setPonto2(Ponto ponto2_)
		{
			ponto2 = ponto2_;
		}
		float getComprimento(){
	 		return sqrt(pow((ponto1.getX() - ponto2.getX()),2) +  
						pow((ponto1.getY() - ponto2.getY()),2) +  
						pow((ponto1.getZ() - ponto2.getZ()),2));
		}
		Linha(){
		}
	private: 
		Ponto ponto1;
		Ponto ponto2;
};

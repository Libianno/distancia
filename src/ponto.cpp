#include <iostream>

using namespace std;

class Ponto{
    public:
        void setX(){
			cout << "Informe o valor de x";
            cin >> x;
		}
		void setY(){
			cout << "Informe o valor de y";
            cin >> y;
		}	
		void setZ(){
			cout << "Informe o valor de z";
            cin >> z;
		}
        float getX(){
			return x;
		}
        float getY(){
			return x;
		}
        float getZ(){
			return x;
		}
        Ponto(){
            setX();
            setY();
            setZ();
            cout << "\n";
        }

    private:
        float x;
        float y;
        float z;
};
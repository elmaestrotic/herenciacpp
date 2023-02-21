#include <iostream>
//#include <string>
using namespace std;
class Vampiro{
public:
    Vampiro(string nombre, int edad) : nombre(nombre), edad(edad) {}

private:
    string nombre;
    int edad;
public:
    void morder(){
        cout << "Ponchao mano.." <<endl;
    }
    void chuparSangre(){
        cout << "llegue.." <<endl;
    }

};

class Dracula : public Vampiro{

private:
    int estatura;
public:
    //Dracula(string nombre, int edad, int estatura):nombre(nombre), edad(edad) ,estatura(estatura){};
    Dracula(string nombre,int edad, int estatura):Vampiro(nombre, edad),estatura(estatura){
        cout<< "Se ha creado un objeto Dracula de nombre "<<nombre<<" de edad: "<<edad <<" y con estatura: "<<estatura<<endl;


    }; /* Ejecución del constructor de la clase base para inicializar a unaVar */
    //ClaseDerivada(int x):ClaseBase(x){} /* Ejecución del constructor de la clase base para inicializar a unaVar */
};

int main() {

    Dracula *obj1=new Dracula("Vladimir",200,185);

    obj1->morder();
    obj1->chuparSangre();

    return 0;
}

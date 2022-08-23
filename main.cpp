#include <iostream>
//#include <string>
using namespace std;
class Vampiro{
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

class Dracula : public Vampiro{};

int main() {
    Dracula *obj1=new Dracula();

    obj1->morder();
    obj1->chuparSangre();

    return 0;
}

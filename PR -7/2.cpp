#include<iostream>
using namespace std;

class A {

    int a;

    public :

        void setDataA() {

            cout << "Enter A : ";
            cin  >> a;
        }

        virtual void getDataA() {

            cout << endl << " A : " << a << endl << endl;
        }
};

class B : virtual public A {

    int b;

    public :

        void setDataB() {

            cout << "Enter B : ";
            cin  >> b;
        }

        void getDataB() {

            cout << endl << " B : " << b << endl << endl;
        }
};

class C : virtual public A {

    int c;

    public :

        void setDataC() {

            cout << "Enter C : ";
            cin  >> c;
        }

        virtual void getDataC() {

            cout << endl << " C : " << c << endl << endl;
        }
};

class D : public B , public C {

    int d;

    public :

        void setDataD() {

            cout << "Enter D : ";
            cin  >> d;
        }

        virtual void getDataD() {

            cout << endl << " D : " << d << endl << endl;
        }
};

int main() {

    D d1;

    d1.setDataA();
    d1.setDataB();
    d1.setDataC();
    d1.setDataD();

    d1.getDataA();
    d1.getDataB();
    d1.getDataC();
    d1.getDataD();

}

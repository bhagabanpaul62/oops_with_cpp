#include <iostream>
using namespace std;

class Base
{
private:
    int private_a;

protected:
    int protected_b;

public:
    int public_c;
    Base()
    {
        private_a = 1;
        protected_b = 2;
        public_c = 3;
    }
    void showBase()
    {
        cout << "Base Class private_a:: " << private_a << "Base Class protected_b:: " << protected_b << "Base Class public_c:: " << public_c << endl;
    }

    protected:
        void setProtected(int x){
            protected_b=x;
        }
        void setprivate(int x){
            private_a=x;
        }
};

class Derived1 : public Base{
    private:
        int derived1_private_var;
    public:
        int derived1_public_var;
    Derived1(){
        derived1_private_var=4;
        derived1_public_var=5;
    }

    void showDerived1(){
         cout << "Derived1 Class - protectedVar: " <<protected_b<< ", publicVar: " << public_c<< endl;
    }
};

class Derived2 :  public Derived1{
    public:
        void showDerived2(){
              cout << "Derived2 Class - protectedVar: " <<protected_b<< ", publicVar: " << public_c << endl;  
        }

};

int main() {
    // Creating objects of Base, Derived1, and Derived2 classes
    Base baseObj;
    Derived1 derived1Obj;
    Derived2 derived2Obj;

    // Accessing members from main()

    cout << "--- Accessing Base class from main() ---" << endl;
    baseObj.showBase();  // Can call public member function of Base
    // baseObj.private_a;  // Not allowed, private
    // baseObj.protected_b;  // Not allowed, protected
    cout << "Base public_c: " << baseObj.public_c << endl;  // Allowed, public

    cout << "\n--- Accessing Derived1 class from main() ---" << endl;
    derived1Obj.showDerived1();  // Can call public member function of Derived1
    // derived1Obj.protected_b;  // Not allowed, protected
    cout << "Derived1 public_c: " << derived1Obj.public_c << endl;  // Allowed, public
    cout << "Derived1 public var: " << derived1Obj.derived1_public_var << endl;  // Allowed, public

    cout << "\n--- Accessing Derived2 class from main() ---" << endl;
    derived2Obj.showDerived2();  // Can call public member function of Derived2
    // derived2Obj.protected_b;  // Not allowed, protected
    cout << "Derived2 public_c: " << derived2Obj.public_c << endl;  // Allowed, public

    return 0;
}

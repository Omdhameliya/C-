#include <iostream>

using namespace std;

class Garage{
public:
  Garage() {
    try {
    	
    } catch (string e) {
      throw e ;
    }
  }
 
};
class Motor :public Garage{
	string Folt = "Your Car Is Folt In Engine";
public:
  Motor() {
    throw  Folt;
    Garage();
  }
};


int main() {
	
  try{
  	Motor a;
  } 
  catch (string e) {
    cout << "That Message Is Send By Garage: " << e << endl;
  }

  return 0;
}


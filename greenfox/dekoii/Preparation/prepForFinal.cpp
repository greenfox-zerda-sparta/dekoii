#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Cars {
  private:
     string color;
     string type;

  public:
    string getType() {
      return type;
    }

    string getColor() {
      return color;
    }

    Cars(string c, string t) {
      color = c;
      type = t;
    }
   
};

int main () {
  
  Cars car1("red", "Volvo");
  Cars car2("yellow", "VW");
  Cars car3("red", "Ferrari");
  Cars car4("white", "Tesla");
  Cars car5("yellow", "Toyota");
  Cars car6("red", "Lada");
  Cars car7("green","Trabant");
  int sumRed = 0;
  int sumYell = 0;
  int sumGreen = 0;
  int sumWhite = 0; 

  vector<Cars> CarPark = {car1, car2, car3, car4, car5, car6, car7};
  for_each (CarPark.begin(), CarPark.end(), [&] (Cars &vehicle ) { if(vehicle.getColor() == "red") sumRed++;
                                                                   else if (vehicle.getColor() == "yellow") sumYell++;
                                                                   else if (vehicle.getColor() == "green") sumGreen++;
                                                                   else sumWhite++; }); 

  cout << sumRed;





  return 0;
}

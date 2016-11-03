#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

double get_surface(RectangularCuboid firstCuboid);
double get_volume(RectangularCuboid firstCuboid);

int main() {

	RectangularCuboid cuboid = {3, 4, 5};

	cout << get_surface(cuboid) << endl;
	cout << get_volume(cuboid);

  return 0;
}

double get_surface(RectangularCuboid firstCuboid) {
  double surface = (firstCuboid.a * firstCuboid.b + firstCuboid.c * firstCuboid.a +
                   firstCuboid.c * firstCuboid.b) * 2;
  return surface;
}


double get_volume(RectangularCuboid firstCuboid) {
  double volume = firstCuboid.a * firstCuboid.b * firstCuboid.c;
  return volume;
}

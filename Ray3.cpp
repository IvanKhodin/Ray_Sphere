#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Header.h"


int main()
{
    Colour   pink(Vec3f(1, 0, 1)), blue(Vec3f(0.5, 0.5, 1));

    Picture pic = Picture();

    Sphere s1 = Sphere(Vec3f(-7, 5, -15), 3, pink), s2 = Sphere(Vec3f(8, -10, -20), 5, blue);

    pic.add(s1);

    pic.add(s2);

    Light light = Light(Vec3f(0, 0, -10), 1);

    pic.render(pic.spheres, light);

    return 0;

}

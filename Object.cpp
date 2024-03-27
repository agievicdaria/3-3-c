#include "Object.h"
using namespace std;

int Object::count = 0;

Object::Object() {
    count++;
}

Object::~Object() {
    count--;
}

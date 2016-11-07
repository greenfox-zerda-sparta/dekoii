/*Vector

Implement an array like data structure called DoubleVector, that behaves like and array but it have some predefined operations in functions.
It should store doubles. It should have an inner array of doubles that stores the values.
Each vector should have size property that stores how many elements are in the stack.
Functions
Construct

Vector* vector_construct(double input[], int size);

    It should dynamically allocate the Vector instance
    It should set the size
    It should dynamically allocate the double array

At

double vector_at(Vector& v, unsigned int index);

    It should return the value inder the given index
    It should return zero if the value is out of bound

Insert

void vector_insert(Vector& v, unsigned int index, double value);

    It should insert the value to the given index like:
        array: {1, 2, 3, 4}
        index: 2
        value: 8
        result: {1, 2, 8, 3, 4}
    It should increment the size by one
    It should reallocate the array

Find

unsigned int vector_find(Vector& v, double value);

    It should return the index of the given value

Remove

void vector_remove(Vector& v, unsigned int index);

    It should remove the element under the index
    It should reallocate the array

Concat

Vector* vector_concat(Vector& v1, Vector v2);

    It should return a new Vector that has all the elements of v1 and v2 like:
        v1: {1, 2}
        v2: {3, 4}
        return: {1, 2, 3, 4}
    It should have the sum size of the vectors
*/

#include <iostream>
#include <string>

using namespace std;

struct Vector {
  //int top;
  unsigned int size;
  double* array;
};


Vector* vector_construct(double input[], int size);
double vector_at(Vector& v, unsigned int index);
void vector_insert(Vector& v, unsigned int index, double value);
void printstack(Vector& vector);
unsigned int vector_find(Vector& v, double value);
void vector_remove(Vector& v, unsigned int index);
Vector* vector_concat(Vector& v1, Vector v2);


int main() {

  double anarrayofdoubles[4] = {1, 2, 3, 4};
  Vector* temp = vector_construct(anarrayofdoubles, 4);
  printstack(*temp);

  cout << vector_at(*temp, 2) << endl;

  vector_insert(*temp, 2, 8);
  printstack(*temp);

  cout << vector_find(*temp, 8) << endl;

  vector_remove(*temp, 2);
  printstack(*temp);

  double anotherArray[3] = {3, 2, 1};
  Vector* temp1 = vector_construct(anotherArray, 3);

  Vector *v3 = vector_concat(*temp, *temp1);
  printstack(*v3);


  delete [] v3;
  delete [] temp;
  delete v3;
  delete temp;
  return 0;
}


Vector* vector_construct(double input[], int size) {

  Vector* vectorNew = new Vector;
  double* arrayNew = new double[size];
  vectorNew->size = size;
  vectorNew->array = arrayNew;
	//vectorNew->top = -1;
  for (int i = 0; i < size; i++) {
    vectorNew->array[i] = input [i];
  }
  return vectorNew;
}


double vector_at(Vector& v, unsigned int index) {

  return (index < v.size ? v.array[index] : 0);
}


void vector_insert(Vector& v, unsigned int index, double value) {

  double* arrayRearrange = new double[v.size + 1];

  unsigned int i = 0;
  while ( i < index) {
    arrayRearrange[i] = v.array[i];
    i++;
  }

  arrayRearrange[index] = value;

  unsigned int j = index ;
  while ( j < v.size) {
    arrayRearrange[j+1] = v.array[index];
    j++;
    index++;
  }

  delete[] v.array;
  v.size += 1;
  v.array = arrayRearrange;

}


void printstack(Vector& v) {
  for (unsigned int i = 0; i < v.size; i++){
    cout << v.array[i] << ' ';
  }
  cout << endl;
}


unsigned int vector_find(Vector& v, double value) {
  for (unsigned int i = 0; i < v.size; i++) {
    if (value == v.array[i]) {
      return i;
    }
  }
  return -1;
}


void vector_remove(Vector& v, unsigned int index) {

  double* arrayRemoved = new double[v.size - 1];

  for (unsigned int i = 0; i < index; i++) {
    arrayRemoved[i] = v.array[i];
  }

  for (unsigned int j = index; j < v.size; j++) {
    arrayRemoved[j] = v.array[index+1];
    index++;
  }

  delete[] v.array;
  v.size -= 1;
  v.array = arrayRemoved;
}


Vector* vector_concat(Vector& v1, Vector v2) {
  Vector* v3 = new Vector;
  double* arrayConcat = new double[v1.size + v2.size];
  v3->size = v1.size + v2.size;
  v3->array = arrayConcat;

  for (unsigned int i = 0; i < v1.size; i++) {
    v3->array[i] = v1.array [i];
  }
  for (unsigned int j = v1.size; j < v1.size + v2.size; j++) {
    v3->array[j] = v2.array [j - v1.size];
  }
    return v3;
}

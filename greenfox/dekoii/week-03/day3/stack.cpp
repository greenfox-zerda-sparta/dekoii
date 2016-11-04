/*Stack

Implement a stack data-structure that stores doubles in C++, and several functions that operate on stacks Each stack should have size property that stores how many elements are in the stack.
Functions
Construct

Stack* stack_construct(double input[], int size);

    It should dynamically allocate the Stack instance
    It should set the size
    It should dynamically allocate the double array

Push

void stack_push(Stack& stack, double value);

    It should push the value to the end of the stack
    It should increment the size by 1
    It should reallocate the array inside by the incremented size, and copy it's values

Pop

double stack_pop(Stack& stack);

    It should return the value that was pushed the last time
    It should decrement the size by 1
    It should reallocate the array inside by the decremented size, and copy it's values

Is empty

bool is_empty(Stack& stack);

    It should return true if the stack is empty and false otherwise
*/



#include <iostream>
#include <string>

using namespace std;

struct Stack {
  int size;
  double *array;
};

void printstack(Stack& stack);
Stack* stack_construct(double input[], int size);
void stack_push(Stack& stack, double value);
double stack_pop(Stack& stack);
bool is_empty(Stack& stack);


int main() {

  double anarrayofdoubles[3] = {2, 3, 4,};
  Stack* temp = stack_construct(anarrayofdoubles, 3);
  printstack(*temp);

  cout << "here comes the push" << endl;
  stack_push(*temp,8);
  printstack(*temp);

  cout << "popping the ballon like Nena (99 luftballons!)" << endl;
  cout << stack_pop(*temp) << endl;;
  printstack(*temp);

  cout << boolalpha << is_empty(*temp);

  delete temp;
  return 0;
}

Stack* stack_construct(double input[], int size) {

  Stack* stackNew = new Stack;
  stackNew->size = size;
  stackNew->array = new double[size];

  for (int i = 0; i < size; i++) {
    stackNew->array[i] = input [i];
  }

  return stackNew;
}

//void stack_push(Stack& stack, double value) {

 // double* arrayNew = new double[];
void printstack(Stack& stack) {

  for (int i = 0; i < stack.size; i++){
    cout << stack.array[i] << ' ';
  }
  cout << endl;
}


void stack_push(Stack& stack, double value) {

  double* pushArray = new double[stack.size + 1];

  for (int i = 0; i < stack.size; i++) {
      pushArray[i] = stack.array[i];
  }
  pushArray[stack.size] = value;

  delete[] stack.array;
  stack.array = pushArray;
  stack.size =stack.size + 1;
}


double stack_pop(Stack& stack){

  double* popArray = new double[stack.size - 1];
  double lastAdded = stack.array[stack.size-1];

    for (int i = 0; i < stack.size-1; i++){
      popArray[i] = stack.array[i];
    }

  delete[] stack.array;
  stack.array = popArray;
  stack.size = stack.size - 1;

  return lastAdded;
}

bool is_empty(Stack& stack) {
  return stack.size == 0;
}

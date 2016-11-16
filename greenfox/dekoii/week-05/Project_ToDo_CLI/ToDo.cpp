
#include "Startup.hpp"

using namespace std;

void addNewTask (int argc, char** argv) {
  if (argc == 3) {
    if (string (argv[1]) == "-a") {
      ofstream myTodoList;
      myTodoList.open("ToDoList.txt", ios::app);
      myTodoList << argv[2] << endl;
      myTodoList.close();
    }
  }else if (argc == 2 && string (argv[1]) == "-a") { // error handling
    cerr << "Unable to add: No Task provided after command -a";
  }
}


int main(int argc, char** argv) {

  startup(argc, argv);
//Command arguments
  addNewTask(argc,argv);

  return 0;
}


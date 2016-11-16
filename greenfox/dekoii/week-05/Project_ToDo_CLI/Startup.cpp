#include "Startup.hpp"


using namespace std;

void startup(int argc, char** argv) {
  if(argc == 1) {
    displayUserInfo(argc,argv);
  }else if (argc == 2) {
    errorHandlingOfCommands(argc,argv);
  }

}


void displayUserInfo (int argc, char** argv) {
    cout << "CLI Todo application" << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "Command line arguments:" << endl;
    cout << "-l   Lists all the tasks" << endl;
    cout << "-a   Adds a new task" << endl;
    cout << "-r   Removes a task" << endl;
    cout << "-c   Completes a task" << endl;
}

void errorHandlingOfCommands(int argc, char** argv) {
  if (string (argv[1]) != "-l" && string(argv[1]) != "-a" && string(argv[1]) != "-r" && string(argv[1]) != "-c"){
    cerr << "Unsupported argument" << endl;
    cout << endl;
    displayUserInfo(argc, argv);
  }
}

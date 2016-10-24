/*
 * guess.cpp
 *
 *  Created on: Oct 23, 2016
 *      Author: dekoii
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  string name;
  int guess;
  char answer;
  char sure;
  int number;

  srand(time(NULL));
  number = rand () % 10 + 1;


  cout << "Hi!" << endl;
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "It is nice to meet you " << name << endl;
  cout << "Do u want to play a game " << name << " ?[y/n]" << endl;
  cin >> answer;

  if ( answer == 'y')
  {
    cout << "Sooo... I thought of a number between 1 and 10.\n Can u guess it?" << endl;

    cout << "Take a guess" << endl;
    cin >> guess;


    if(guess == number)
    {
      cout << "yay u guessed it!" ;
      return 0;
    }
    else
    {
      cout << "Take another guess!" << endl;
    }

  }
  else
  {
    cout << "Are you sure?[y/n]";
    cin >> sure;

      if (sure == 'y')
      {
      cout << "As you wish!!" << endl;
      return 0;
      }
      else if (sure == 'n')
      {
      cout << "Glad u canged your mind " << name << endl;
      }
  }







return 0;
}

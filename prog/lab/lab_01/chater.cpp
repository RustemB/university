#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string name;
  int age;
  cout << "Hello! What is your name?" << endl << "> ";
  cin >> name;
  cout << "Nice to see you, " << name << "!" << endl;
  cout << "Ok, how old are you?" << endl << "> ";
  cin >> age;

  time_t rawtime;
  time(&rawtime);
  int cy = 1900 + localtime(&rawtime)->tm_year;
  int age_diff = age - abs(cy - 2001);

  if (age_diff > 0) {
    cout << "Wow! you are older than developer of this program by " << age_diff
         << " years." << endl;
  } else if (age_diff < 0) {
    cout << "Yuy, developer of this program older than you by " << -age_diff
         << " years :)" << endl;
  } else {
    cout << "Nice! You are the same age as developer of this program..."
         << endl;
  }

  cout << "It was gr8 to chat with you, " << name << "!" << endl;

  return 0;
}

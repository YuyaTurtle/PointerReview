#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
  //cout << endl << "general rule: & gives mem loc " << endl;
  int variable = 10;
  cout << "variable=======================" << endl;
  //I want to print content
  cout << "(variable) \t= " << variable << endl;
  //I want to print content
  cout << "(*variable) \t= INVALID" << endl;
  //I want to print location
  cout << "(&variable) \t= " << &variable << endl;

  cout << endl << "*point = &variable=============" << endl;
  cout << "*point2 = variable = INVALID" << endl;
  //I want another pointer that point to same memory location
  int *point = &variable;
  *point = 11;
  cout << "!!!*point = 11!!!" <<endl;
  //I want to print point location
  cout << "(point) \t= " << point << endl;
  //I want to print point content
  cout << "(*point) \t= " << *point << endl;
  //I want to print point
  cout << "(&point) \t= " << &point << " (this pointer's location)"<< endl;
  //I want to print variable, which should also change
  cout << "(variable) \t= " << variable << endl;

  int *point2 = point;
  cout << "int *point2 = point  ptr to same mem loc" << endl;


  //I want to create a reference to variable location
  int &ref = variable;
  cout << endl << "&ref = variable=============== (used like variable)" << endl;
  int &ref2 = *point;
  cout << "&ref2 = *point \t= OK" << endl;
  //I want to print ref content
  cout << "(ref) \t\t=" << ref << endl;
  cout << "(*ref) \t\t= INVALID" << endl;
  //I want to print ref loc
  cout << "(&ref) \t\t= " << &ref << endl;

  //I want to change ref content
  ref = 12;
  cout << "!!!ref = 12!!!" << endl;
  //I want to print content
  cout << "(variable) \t= " << variable << endl;

  return 0;
}

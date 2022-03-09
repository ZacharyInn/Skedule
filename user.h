#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User
{
public:
  User();
  User(int setid, string setname, string setlevel);
  ~User();
  int getID();
  string getName();
  string getLevel();
  void setID(int setID);
  void setName(string setName);
  void setLevel(string setLevel);

protected:
  int id;
  string name;
  string level;
};

#endif

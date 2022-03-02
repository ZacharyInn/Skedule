#include <iostream>
#include "user.h"

using namespace std;

User::User()
{
  id = 0;
  name = "";
  level = "";
}

User::User(int setid, string setname, string setlevel)
{
  id = setid;
  name = setname;
  level = setlevel;
}

User::~User()
{}

int User::getID()
{
  return id;
}

string User::getName()
{
  return name;
}

string User::getLevel()
{
  return level;
}

void User::setID(int setID)
{
  id = setID;
}

void User::setName(string setName)
{
  name = setName;
}

void User::setLevel(string setLevel)
{
  level = setLevel;
}

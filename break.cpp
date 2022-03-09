#include "Break.h"

Break::Break(){}
Break::~Break(){}

// getters
int Break::getLength()
{
  return length;
}
int Break::getTime()
{
  return time;
}
int Break::getNumBreaks()
{
  return numBreaks;
}


// setters
void Break::setLength(int l)
{
  length = l;
}
void Break::setTime(int t)
{
  time = t;
}
void Break::setNumBreaks(int n)
{
  numBreaks = n;
}

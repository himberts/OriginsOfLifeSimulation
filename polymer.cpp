#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include "polymer.h"

polymer::polymer()
{
  elements = new int[1000];
  length = 0;
  type = 0;
  for(int i = 1; i<1000; i++)
  {
    elements[i] = 0;
  }
}

polymer::~polymer()
{
  delete[] elements;
}

int polymer::getElement(int i)
{
  return(elements[i]);
}

int polymer::getLength()
{
  return(length);
}

int polymer::getType()
{
  return(type);
}

void polymer::update()
{
}

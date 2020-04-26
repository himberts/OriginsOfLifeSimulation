#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include "monomer.h"
#include "polymer.h"

using namespace std;

double tau_P1(double);
int towersampling2(double*,int);

int main(int argc, char *argv[])
{
  if(argc!=5)
  {
    std::cout<<"\n\nPlease check your command!! Usage:\n polymerisation_gillespie2 NumberOfMonomers NumberOfTimeSteps NumberOfIterations FileName\n\n";
    return(0);
  }
  int NumMonomers, NumOfTimeSteps, NumOfIterations, NumReactions = 14, mu, \
  NumRadPolymers = 0, UnordMonomers = 0;
  double c_mu[5] = {1, 0, .8, 3, 2};
  double a= 0, h[NumReactions], tau = 0, t=0;
  polymer PolymerList[1000];
  monomer A(NumMonomers,2), U(NumMonomers,1);
  double* a_mu;
  char* dateiname2;
  dateiname2 = new char[50];
  fstream Datei;
  int index = 0, index2 = 0;
  NumMonomers     = atoi(argv[1]);
  NumOfTimeSteps  = atoi(argv[2]);
  NumOfIterations = atoi(argv[3]);
}

double tau_P1(double a) //generate random number for the density P(tau)
{
  double U,Z;
  U =  (double)(rand())/(double)(RAND_MAX);
  Z = -(log(1-U)/a);
  return(Z);
}

int towersampling2(double* Input, int size) // generate random number for a discrete density
{
  double *q = new double[size+1];
  double randV;
  int index = 0;
  q[0]=0;

  for(int i=1; i<=size; i++)
  {
    q[i]=q[i-1]+Input[i-1];
  }
  randV = (double)(rand())/(double)(RAND_MAX);  
  for(int i=1; i<=size ; i++)
  {
    if(q[i-1]<randV && randV<q[i])
    {
      index = i;
    }
  }
  delete[] q;
  return(index);
}

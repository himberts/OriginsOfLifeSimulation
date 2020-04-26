#ifndef MONOMER_H_
#define MONOMER_H_

class monomer
{
    private:
      double NumberOfMonomers;  // Number of Monomers
      int type;       // 1 = U, 2 = A, 0 = default
    public:
      monomer(int,int);
      ~monomer();
      int getNumberOfMonomers();
      void update();
};

#endif

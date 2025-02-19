using namespace std;
#include "vectWRV.h"
#include "randFun.h"

#include <iostream>
////////////////////////////////////////////////////////////////////////

StringInt *VectWithRandVal::FillWithUniqueInd(int nbElSub)

{
  int i, ind;
  StringInt *toRet = new StringInt;

  IntRandomFunction randGen(0, NbElAll - 1);

  do {
    ind = randGen.RandomInteger();

    if (Busy[ind] == 0) {
      toRet->Insert(ind);
      Busy[ind] = 1;
    }

    else {
      for (i = ind + 1; i < NbElAll; i++) {
        if (Busy[i] == 0)
          break;
      }

      if (i < NbElAll) {
        toRet->Insert(i);
        Busy[i] = 1;
      }
    }

  } while (toRet->GetNbEl() < nbElSub);

  return toRet;
}

////////////////////////////////////////////////////////////////////////

void VectWithRandVal::Append(StringInt *originalList, StringInt *toAppend)

{
  int i, val;
  int nbApp = toAppend->GetNbEl();

  for (i = 0, toAppend->GoToBeg(); i < nbApp; i++, toAppend->GoToNext()) {
    val = toAppend->GetVal();
    Busy[val] = 1;
    originalList->Insert(val);
  }
}

////////////////////////////////////////////////////////////////////////

VectWithRandVal::VectWithRandVal(int nbElAll)

{
  int p;

  NbElAll = nbElAll;
  Busy = new int[NbElAll];

  for (p = 0; p < nbElAll; p++)
    Busy[p] = 0;
}

////////////////////////////////////////////////////////////////////////

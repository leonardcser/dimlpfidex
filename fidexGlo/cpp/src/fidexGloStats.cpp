#include "fidexGloStatsFct.h"

////////////////////////////////////////////////////////////

int main(int nbParam, char **param)

{
  string command = "fidexGloStats";
  if (nbParam >= 1) {
    for (int p = 1; p < nbParam; p++) {
      command += " ";
      command += param[p];
    }
  }
  fidexGloStats(command);
}

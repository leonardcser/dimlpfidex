#ifndef DIMLPPREDFCT_H
#define DIMLPPREDFCT_H

#include "checkFun.h"
#include "dimlp.h"
#include "writeErr.h"
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <vector>

static void GiveAllParam();
static void SaveOutputs(DataSet &data, Dimlp *net, int nbOut, int nbWeightLayers, char *outfile);
int dimlpPred(string command);

#endif

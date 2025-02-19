#ifndef EXPERIMENT_H
#define EXPERIMENT_H
#include "hyperspace.h"
#include <fstream>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

class FidexAlgo {
public:
  //  Contructeur:
  FidexAlgo();

  //  Méthodes:

  // int fidex(int nbParam, char** param);
  bool fidex(std::tuple<vector<tuple<int, bool, double>>, vector<int>, int, double, double> &rule, vector<vector<double>> *trainData, vector<int> *trainPreds, vector<vector<double>> *trainOutputValuesPredictions, vector<int> *trainTrueClass, vector<double> *mainSampleValues, int mainSamplePred, int mainSampleTrueClass, Hyperspace *hyperspace, const int nbIn, const int nbAttributs, const int nbHyp, int itMax, int minNbCover, bool dropoutDim, double dropoutDimParam, bool dropoutHyp, double dropoutHypParam);
};

#endif

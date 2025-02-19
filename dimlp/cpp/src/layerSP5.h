#ifndef LAYERSP5_H
#define LAYERSP5_H

using namespace std;
#ifndef LAYER
#include "layer.h"
#endif

///////////////////////////////////////////////////////////////////

class LayerSP5 : public Layer {

  //----------------------------------------------------------------

  float Activation1(float x) { return Power5(x); }

  //----------------------------------------------------------------

public:
  LayerSP5(
      int nbDown,
      int nbUp,
      int nbWeights,
      int nbWeightsForInit) :

                              Layer(0, 0, 0, nbDown, nbUp, nbWeights, nbWeightsForInit)

  {
    ;
  }
};

///////////////////////////////////////////////////////////////////

#endif

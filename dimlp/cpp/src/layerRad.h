#ifndef LAYERRAD_H
#define LAYERRAD_H

using namespace std;
#ifndef LAYER
#include "layer.h"
#endif

///////////////////////////////////////////////////////////////////

class LayerRad : public Layer {

  //----------------------------------------------------------------

  float Activation1(float x) { return Gaussian(x); }
  void ForwLayer() { ForwRadial(); }

  //----------------------------------------------------------------

public:
  LayerRad(
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

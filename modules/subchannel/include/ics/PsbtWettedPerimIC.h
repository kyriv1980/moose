#ifndef PSBTWETTEDPERIMIC_H
#define PSBTWETTEDPERIMIC_H

#include "PsbtIC.h"

class PsbtWettedPerimIC;

template <>
InputParameters validParams<PsbtWettedPerimIC>();

//! Sets the linear heat rate for the PSBT 01-6232 fluid temperature benchmark.

class PsbtWettedPerimIC: public PsbtIC
{
public:
  PsbtWettedPerimIC(const InputParameters & params);

  Real value(const Point & p) override;
};
#endif // PSBTWETTEDPERIMIC_H

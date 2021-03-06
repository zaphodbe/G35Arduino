/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright © 2011 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  See README for complete attributions.
*/

#ifndef INCLUDE_G35_PROGRAMS_INCHWORM_H
#define INCLUDE_G35_PROGRAMS_INCHWORM_H

#include <LightProgram.h>
#include <Worm.h>

class Inchworm : public LightProgram {
 public:
  Inchworm(G35& g35);
  uint32_t Do();

 private:
  uint8_t count_;
  uint32_t next_worm_;
  Worm worms_[6];
};

#endif  // INCLUDE_G35_PROGRAMS_INCHWORM_H

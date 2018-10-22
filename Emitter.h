#ifndef EMITTER_H_
#define EMITTER_H_
#include "Particle.h"
namespace sdll
{

class Emitter
{
    public:
      const static int NPARTICLES = 1000;
    private:
      Particle *  m_pParticles;
    public:
      Emitter();
      void update();
      virtual ~Emitter();
      const Particle * const getParticles() { return m_pParticles; };
};
} // namespace sdll

#endif
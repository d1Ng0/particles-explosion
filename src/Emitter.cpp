#include "Emitter.h"

namespace sdll
{
    Emitter::Emitter(){
        m_pParticles = new Particle[NPARTICLES];
    }

    Emitter::~Emitter(){
        delete[] m_pParticles;
    }

    void Emitter::update(){
        for (int i = 0; i < Emitter::NPARTICLES; i++){
            m_pParticles[i].update();
        }
    }

}
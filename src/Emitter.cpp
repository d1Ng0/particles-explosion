#include "Emitter.h"

namespace sdll
{
    Emitter::Emitter(): lastTime(0) {
        m_pParticles = new Particle[NPARTICLES];
    }

    Emitter::~Emitter(){
        delete[] m_pParticles;
    }

    void Emitter::update(int elapsed){

        int interval = elapsed - lastTime;

        for (int i = 0; i < Emitter::NPARTICLES; i++){
            m_pParticles[i].update(interval);
        }
        lastTime = elapsed;
    }

}
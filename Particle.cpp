#include <stdlib.h>
#include "Particle.h"

namespace sdll
{
Particle::Particle()
{
    m_x = (2.0 * (double)rand() / RAND_MAX) - 1;
    m_y = (2.0 * (double)rand() / RAND_MAX) - 1;
}

Particle::~Particle()
{
}

void Particle::update()
{
    const double speed = 0.01;
    m_x += speed;
    m_y += speed;
}

} // namespace sdll
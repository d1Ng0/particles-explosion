#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdll
{
struct Particle
{
  double m_x;
  double m_y;

public:
  Particle();
  void update();
  virtual ~Particle();
};

} // namespace sdll

#endif
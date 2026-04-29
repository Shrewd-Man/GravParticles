// particle.h
// This file defines the particle struct, which is used to represent a particle in the simulation.

#ifndef PARTICLE_H
#define PARTICLE_H

typedef struct particle {
    double Mass;
    double xVel;
    double yVel;
    double xAcc;
    double yAcc;
    double xPos;
    double yPos;
} particle;

#endif // PARTICLE_H
// particle.h
// This file defines the particle struct, which is used to represent a particle in the simulation.

#ifndef PARTICLE_H
#define PARTICLE_H

typedef struct particle {
    double Mass; // in kg
    double xVel; // m/s
    double yVel; // m/s
    double xAcc; // m/s/s
    double yAcc; // m/s/s
    double xPos; // 100 km
    double yPos; // 100 km
} particle;

#endif // PARTICLE_H
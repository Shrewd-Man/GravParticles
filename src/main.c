// Gravitaitional Particle Movement Simulation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "particle.h"

#define G 6.67430e-11 // Gravitational constant
#define EARTH_MASS 5.97219e+24 // Mass of earth
#define TIME_STEP 0.01 // Time step for the simulation
#define NUM_STEPS 1000 // Number of simulation steps

int main() {
    // Particle Setup
    particle p1 = {10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // Mass = 10 kg
    particle p2 = {EARTH_MASS, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0}; // Mass = 200 kg, initial position (1, 0)




}
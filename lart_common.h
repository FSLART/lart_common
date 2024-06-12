#ifndef LART_COMMON_H_
#define LART_COMMON_H_

#include <math.h>

// --- DYNAMICS CONVERSIONS ---

// The radius of the tire in meters
#define TIRE_RADIUS_M 0.255

// The number of pulses per revolution
#define PULSES_PER_REVOLUTION 37

// The diameter of the tire in meters
#define TIRE_DIAMETER_M (2 * M_PI * TIRE_RADIUS_M)

// The distance traveled by pulse
#define METERS_PER_PULSE (TIRE_DIAMETER_M / PULSES_PER_REVOLUTION)

// Convert the pulse count difference to traveled distance in meters
#define PULSE_DIFF_TO_DISTANCE_M(pulse_diff) (pulse_diff * METERS_PER_PULSE)

# endif  // LART_COMMON_H_

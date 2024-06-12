#ifndef LART_COMMON_H_
#define LART_COMMON_H_

#include <math.h>

#define __LART_T24__ // BE AWARE TO REMOVE THIS HARDCODE IN FUTURE VEHICLES

// --- DYNAMICS CONVERSIONS ---

#ifdef __LART_T24__

// The radius of the tire in meters
#define TIRE_RADIUS_M 0.255f

// The number of pulses per revolution
#define PULSES_PER_REVOLUTION 37

#endif

// The diameter of the tire in meters
#define TIRE_PERIMETER_M (2 * M_PI * TIRE_RADIUS_M)

// The distance traveled by pulse
#define METERS_PER_PULSE (TIRE_PERIMETER_M / PULSES_PER_REVOLUTION)

// Convert the pulse count difference to traveled distance in meters
#define PULSE_DIFF_TO_DISTANCE_M(pulse_diff) (pulse_diff * METERS_PER_PULSE)


// --- POWERTRAIN CONVERSIONS ---

#ifdef __LART_T24__

// Transmission ratio
#define TRANSMISSION_RATIO 4.0f

#endif

// Meters per second to engine revolutions per minute
#define MS_TO_RPM(ms) (TRANSMISSION_RATIO * (ms / TIRE_PERIMETER_M) * 60.0)

// Engine revolutions per minute to meters per second
#define RPM_TO_MS(rpm) (TIRE_PERIMETER_M * (rpm / TRANSMISSION_RATIO / 60.0))

# endif  // LART_COMMON_H_

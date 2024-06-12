#ifndef LART_COMMON_H_
#define LART_COMMON_H_

#include <math.h>

// --- DYNAMICS CONVERSIONS ---

// The radius of the tire in meters
#define TIRE_RADIUS_M 0.255f

// The number of pulses per revolution
#define PULSES_PER_REVOLUTION 37

// The diameter of the tire in meters
#define TIRE_PERIMETER_M (2 * M_PI * TIRE_RADIUS_M)

// The distance traveled by pulse
#define METERS_PER_PULSE (TIRE_PERIMETER_M / PULSES_PER_REVOLUTION)

// Convert the pulse count difference to traveled distance in meters
#define PULSE_DIFF_TO_DISTANCE_M(pulse_diff) (pulse_diff * METERS_PER_PULSE)


// --- POWERTRAIN CONVERSIONS ---

// Transmission ratio
#define TRANSMISSION_RATIO 4.0f

// Meters per second to engine revolutions per minute
#define MS_TO_RPM(ms) (TRANSMISSION_RATIO * (MS / TIRE_PERIMETER_M) * 60.0)

// Engine revolutions per minute to meters per second
#define RPM_TO_MS(rpm) (TIRE_PERIMETER_M * (rmp / TRANSMISSION_RATIO / 60.0))

# endif  // LART_COMMON_H_

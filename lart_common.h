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

// TODO: The steering ratio
#define STEERING_RATIO 16.0f

// The maximum steering angle in radians
#define MAX_STEERING_ANGLE_RAD M_PI

#endif

// Convert radians to degrees
#define RAD_TO_DEG(rad) (rad * 180.0 / M_PI)

// Convert degrees to radians
#define DEG_TO_RAD(deg) (deg * M_PI / 180.0)

// The diameter of the tire in meters
#define TIRE_PERIMETER_M (2 * M_PI * TIRE_RADIUS_M)

// The distance traveled by pulse
#define METERS_PER_PULSE (TIRE_PERIMETER_M / PULSES_PER_REVOLUTION)

// Convert the pulse count difference to traveled distance in meters
#define PULSE_DIFF_TO_DISTANCE_M(pulse_diff) (pulse_diff * METERS_PER_PULSE)

// Convert radians steering angle to degree steering wheel angle
#define RAD_ST_ANGLE_TO_DEG_SW_ANGLE(st) (STEERING_RATIO * RAD_TO_DEG(st))

// Convert degree steering wheel angle to radians steering angle
#define DEG_SW_ANGLE_TO_RAD_ST_ANGLE(sw) (DEG_TO_RAD(sw) / STEERING_RATIO)

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

#ifndef LART_COMMON_H_
#define LART_COMMON_H_

#define __LART_T24__ // BE AWARE TO REMOVE THIS HARDCODE IN FUTURE VEHICLES

#define LART_PI 3.14159265358979323846

// --- DYNAMICS CONVERSIONS ---

#ifdef __LART_T24__

// The radius of the tire in meters
#define TIRE_RADIUS_M 0.255f

// The wheelbase in meters
#define WHEELBASE_M 1.550f

// The number of pulses per revolution
#define WHEEL_SPROCKET_PULSES_PER_REVOLUTION 37

// Ratio between steering wheel angle and steering angle
#define STEERING_RATIO 4.57

// The maximum steering wheel angle in degrees
#define MAX_STEERING_ANGLE_DEG 105

// The maximum steering wheel angle in radians
#define MAX_STEERING_ANGLE_RAD (DEG_TO_RAD(MAX_STEERING_ANGLE_DEG))

// The maximum wheel angle the car is able to do in autonomous mode
#define MAX_WHEEL_ANGLE_RAD DEG_TO_RAD(24)

// Suspension Travel distance in mm
#define SUSPENSION_TRAVEL_MM 500

#endif

// Convert radians to degrees
#define RAD_TO_DEG(rad) ((rad * 180.0) / LART_PI)

// Convert degrees to radians
#define DEG_TO_RAD(deg) ((deg * LART_PI) / 180.0)

// The diameter of the tire in meters
#define TIRE_PERIMETER_M (2 * LART_PI * TIRE_RADIUS_M)

// The distance traveled by pulse
#define METERS_PER_PULSE (TIRE_PERIMETER_M / WHEEL_SPROCKET_PULSES_PER_REVOLUTION)

// Convert the pulse count difference to traveled distance in meters
#define PULSE_DIFF_TO_DISTANCE_M(pulse_diff) (pulse_diff * METERS_PER_PULSE)

// Convert steering wheel angle to steering angle (wheels) (unit agnostic)
#define SW_ANGLE_TO_ST_ANGLE(sw) (sw / STEERING_RATIO)

// Convert steering angle (wheels) to steering wheel angle (unit agnostic)
#define ST_ANGLE_TO_SW_ANGLE(st) (st * STEERING_RATIO)

// Convert radians steering angle (wheels) to degree steering wheel angle
#define RAD_ST_ANGLE_TO_DEG_SW_ANGLE(st) (STEERING_RATIO * RAD_TO_DEG(st))

// Convert degree steering wheel angle to radians steering angle (wheels)
#define DEG_SW_ANGLE_TO_RAD_ST_ANGLE(sw) (DEG_TO_RAD(sw) / STEERING_RATIO)

// Convert radians steering angle to turn percent
#define RAD_ST_ANGLE_TO_TURN_PERCENT(st) (st / (2 * LART_PI))

// Convert degrees steering angle to turn percent
#define DEG_ST_ANGLE_TO_TURN_PERCENT(st) (st / 360.0)

// --- ACTUATION CONVERSIONS ---

#ifdef __LART_T24__

// Number of steering actuator encoder units per turn (360º rotation)
#define ST_ENCODER_UNITS_PER_TURN 1687552

// Steering actuator offset/home. Usually zero, unless not configured in the controller.
#define ST_ENCODER_OFFSET 0

#endif

// Convert radians steering angle to atuator position with variable ratio
#define RAD_ST_TO_MAXON_POS_WITH_RATIO(st,ratio) (DEG_SW_TO_ACTUATOR_POS(ratio * RAD_TO_DEG(st)))

// Convert radians steering wheel angle to actuator position.
#define RAD_SW_ANGLE_TO_ACTUATOR_POS(st) (int) ((RAD_ST_ANGLE_TO_TURN_PERCENT(st) * ST_ENCODER_UNITS_PER_TURN) + ST_ENCODER_OFFSET)

// Convert radians steering angle (wheels) to actuator position.
#define RAD_ST_ANGLE_TO_ACTUATOR_POS(st) (RAD_SW_ANGLE_TO_ACTUATOR_POS(ST_ANGLE_TO_SW_ANGLE(st)))

// Convert encoder units to steering wheel angle
#define ACTUATOR_POS_TO_SW_ANGLE(actUnits) ((360.0 * actUnits) / ST_ENCODER_UNITS_PER_TURN)

// Convert steering wheel degrees to actuator pos
#define DEG_SW_TO_ACTUATOR_POS(sw) ((ST_ENCODER_UNITS_PER_TURN * sw) / 360)

//Get an aproximate steering ratio for given steering angle
#define STEERING_ANGLE_TO_RATIO(st) ((-0.0776042*st)+7.26123)

// --- POWERTRAIN CONVERSIONS ---

#ifdef __LART_T24__

// Transmission ratio
#define TRANSMISSION_RATIO 4.0f

#endif

// Meters per second to engine revolutions per minute
#define MS_TO_RPM(ms) (TRANSMISSION_RATIO * (ms / TIRE_PERIMETER_M) * 60.0)

// Engine revolutions per minute to meters per second
#define RPM_TO_MS(rpm) (TIRE_PERIMETER_M * (rpm / TRANSMISSION_RATIO / 60.0))

// Cone types
#define CONE_UNKNOWN_TYPE 0
#define CONE_YELLOW_TYPE 1
#define CONE_BLUE_TYPE 2
#define CONE_SMALL_ORANGE_TYPE 3
#define CONE_LARGE_ORANGE_TYPE 4


# endif  // LART_COMMON_H_
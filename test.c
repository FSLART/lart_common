#include <stdio.h>
#include "lart_common.h"

float test_pulse_diff_to_distance_m(int pulse_diff) {
    return PULSE_DIFF_TO_DISTANCE_M(pulse_diff);
}

int test_ms_to_rpm(float ms) {
    return MS_TO_RPM(ms);
}

float test_rpm_to_ms(int rpm) {
    return RPM_TO_MS(rpm);
}

int main() {
    printf("Distance from pulse diff.: %f\n", test_pulse_diff_to_distance_m(1));
    printf("RPM from m/s: %d\n", test_ms_to_rpm(2.78f));
    printf("m/s from RPM: %f\n", test_rpm_to_ms(416));
    return 0;
}

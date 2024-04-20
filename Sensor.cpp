#include "Sensor.h"

// Işık kontrol fonksiyonu tanımı
void controlLight(Sensor& sensor) {
    if (sensor.motionDetected) {
        sensor.lightState = ON;
    } else {
        sensor.lightState = OFF;
    }
}

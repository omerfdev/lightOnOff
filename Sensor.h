#ifndef SENSOR_H
#define SENSOR_H

// Işık Durumu enum tanımı
enum LightState {
    OFF,
    ON
};

// Sensör yapı (structure) tanımı
struct Sensor {
    bool motionDetected;
    LightState lightState;
};

// Işık kontrol fonksiyonu bildirimi
void controlLight(Sensor& sensor);

#endif // SENSOR_H

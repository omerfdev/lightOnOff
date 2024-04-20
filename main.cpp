#include <iostream>
#include "Sensor.h"

int main() {
    // Sensör oluşturulması ve başlangıç durumu atanması
    Sensor sensor;
    sensor.motionDetected = true; // Sensör hareket algıladı
    sensor.lightState = OFF; // Işık başlangıçta kapalı

    // Sensör hareket algıladığında ışığın kontrol edilmesi
    controlLight(sensor);

    // Sonuçların yazdırılması
    std::cout << "Sensör hareket algılandı." << std::endl;
    std::cout << "Işık durumu: " << (sensor.lightState == ON ? "AÇIK" : "KAPALI") << std::endl;

    return 0;
}

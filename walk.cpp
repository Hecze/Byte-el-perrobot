#include <Servo.h>

Servo hombro[4];  // 4 servos para los hombros
Servo rodilla[4];  // 4 servos para las rodillas

void setup() {
  for (int i = 0; i < 4; i++) {
    hombro[i].attach(2 + i * 2);  // Pines pares desde el 2 al 10
    rodilla[i].attach(3 + i * 2);  // Pines impares desde el 3 al 9
  }
}

void loop() {
  // Aquí puedes implementar la lógica para que el robot camine
  // Por ejemplo, puedes mover las patas de una manera específica para simular el caminar.

  // Ejemplo básico: mover las patas hacia adelante y hacia atrás
  for (int i = 0; i < 4; i++) {
    hombro[i].write(90);  // Posición neutral del hombro
    rodilla[i].write(90);  // Posición neutral de la rodilla
  }

  delay(1000);  // Espera 1 segundo

  for (int i = 0; i < 4; i++) {
    hombro[i].write(0);  // Mover el hombro hacia adelante
    rodilla[i].write(180);  // Mover la rodilla hacia adelante
  }

  delay(1000);  // Espera 1 segundo

  // Puedes experimentar con diferentes movimientos y secuencias para lograr el caminar
}

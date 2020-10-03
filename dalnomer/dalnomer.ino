// URL: https://arduinomaster.ru/datchiki-arduino/ultrazvukovoj-dalnomer-hc-sr04/
#include <NewPing.h>
#define PIN_TRIG 12
#define PIN_ECHO 11
#define MAX_DISTANCE 100 // Константа для определения максимального расстояния, которое мы будем считать корректным.
// Создаем объект, методами которого будем затем пользоваться для получения расстояния.
// В качестве параметров передаем номера пинов, к которым подключены выходы ECHO и TRIG датчика
NewPing sonar(PIN_TRIG, PIN_ECHO, MAX_DISTANCE);
void setup() {
  pinMode(2,OUTPUT);
  // Инициализируем взаимодействие по последовательному порту на скорости 9600
  Serial.begin(9600);
}
void loop() {
  // Стартовая задержка, необходимая для корректной работы.
  delay(30);
  // Получаем значение от датчика расстояния и сохраняем его в переменную
  unsigned int distance = sonar.ping_cm();
  // Печатаем расстояние в мониторе порта
  Serial.print(distance);
  Serial.println("см");
 if(distance>50){
   digitalWrite(2,LOW);
 }
 if(distance<50){
   digitalWrite(2,HIGH);
 }
 delay(300); 
 }

 

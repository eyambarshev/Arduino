#include <iarduino_IR_TX.h>                      // Подключаем библиотеку для работы с ИК-передатчиком
iarduino_IR_TX VD(10);                           // Объявляем объект VD, с указанием вывода к которому подключён ИК-передатчик
void setup(){
  VD.begin();                                    // Инициируем работу с ИК-передатчиком
  VD.send(180BD9FF);                           // Однократно отправляем код 0x00FFA25D, без пакетов повторов
}
void loop(){}


#include <Keypad.h>

const byte ROWS = 4; //quatro linhas
const byte COLS = 3; //quatro colunas
//Definir os simbolos nos botões do teclado
char hexaKeys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; //conectar nas saídas das linhas
byte colPins[COLS] = {6, 7, 8}; //conectar nas saídas das colunas

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}

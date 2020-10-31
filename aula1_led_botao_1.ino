// declaração de variáveis globais
int l1 = 13, l2 = 12, l3 = 11, b1 = 2, b2 = 3, b3 = 4, tempo = 500;
int eB1, eB2, eB3;
int eL1 = 0, eL2 = 0, eL3 = 0;

// setup - configuração
void setup()
{
  pinMode(l1, OUTPUT); // configura o pino 13 como saída
  pinMode(b1, INPUT_PULLUP); // configura o pino como entrada de nível alto
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
}

// loop - ciclo
void loop()
{
  eB1 = digitalRead(b1);
  eB2 = digitalRead(b2);
  eB3 = digitalRead(b3);
  
  if (eB1 == 0){
    eL1 = !eL1;
    delay(100);
  }
  
  if (eB2 == 0 && eL1 == 1){
    eL2 = !eL2;
    eL1 = !eL1;
    delay(100);
  }
  
  if (eB3 == 0){
    eL3 = !eL3;
    delay(100);
  }
  
  digitalWrite(l1, eL1);
  digitalWrite(l2, eL2);
  digitalWrite(l3, eL3);
}

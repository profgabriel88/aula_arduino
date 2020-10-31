// declaração de variáveis globais
int led  = 10, tempo = 100;

// setup - configuração
void setup()
{
	pinMode(led, OUTPUT);
}

// loop - ciclo
void loop()
{
	digitalWrite(led, HIIGH); // altera o estado do pino para alto
	delay(tempo); // aguarda o tempo determinado pela variável
	digitalWrite(led, LOW); // altera o estado do pino para baixo
	delay(tempo);
}
	

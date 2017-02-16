    //Sensor de luz
    int ledPin = 13; //Led no pino 13
    int ldrPin = 0; //LDR no pino analígico 8
    int ldrValor = 0; //Valor lido do LDR
    const int buzzer = 11;//buzzer
    const int LED[] = {1,2,3,4,5,6,7,8,9,10,11};//barra grafica
    void setup() {
    pinMode(ledPin,OUTPUT); //define a porta 7 como saída
    Serial.begin(9600); //Inicia a comunicação serial
    pinMode(buzzer,OUTPUT);//define a porta 10 como saída
    
    for(int x = 1; x <=11; x++){
       pinMode(LED[x], OUTPUT);
      }
    }
    void loop() {
    ///ler o valor do LDR
    ldrValor = analogRead(ldrPin); //O valor lido será entre 0 e 1023
    //se o valor lido for maior que 200, liga o led
    if (ldrValor>200) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[10],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[10],LOW);
    }
    
    if (ldrValor>600) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[9],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[9],LOW);
    }
    if (ldrValor>760) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[8],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[8],LOW);
    }
    
    if (ldrValor>860) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[7],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[7],LOW);
    }
    
    if (ldrValor>900) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[6],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[6],LOW);
    }
    
    if (ldrValor>=899) {
      digitalWrite(ledPin,HIGH);
        tone(buzzer,500);
        digitalWrite(LED[5],HIGH);
    }
      // senão, apaga o led,BUZZER,LED[]
    else {
      digitalWrite(ledPin,LOW);
      noTone(buzzer);
      digitalWrite(LED[5],LOW);
    }
    //imprime o valor lido do LDR no monitor serial
    Serial.println(ldrValor);
    delay(500);
    }


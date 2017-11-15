//Buttons
const int BtnR1 = 44;
const int BtnR2 = 42;
const int BtnR3 = 38;
const int BtnR4 = 36;
const int BtnR5 = 34;
const int BtnR6 = 32;
const int BtnR7 = 30;

const int BtnRF = 46;
const int BtnRNF = 48;

//LEDs
const int LEDR1 = 45;
const int LEDR2 = 43;
const int LEDR3 = 41;
const int LEDR4 = 39;
const int LEDR5 = 37;
const int LEDR6 = 35;
const int LEDR7 = 33;

const int LEDRF = 47;
const int LEDRNF = 49;

//State Buttons 
int StateR1 = 0;
int StateR2 = 0;
int StateR3 = 0;
int StateR4 = 0;
int StateR5 = 0;
int StateR6 = 0;
int StateR7 = 0;

int StateRF = 0;
int StateRNF = 0;

//State Leds
int StateLEDR1 = 0;
int StateLEDR2 = 0;
int StateLEDR3 = 0;
int StateLEDR4 = 0;
int StateLEDR5 = 0;
int StateLEDR6 = 0;
int StateLEDR7 = 0;

int StateLEDRF = 0;
int StateLEDRNF = 0;

//R Verification
bool R1Ver = true;
bool R2Ver = true;
bool R3Ver = true;
bool R4Ver = true;
bool R5Ver = true;
bool R6Ver = true;
bool R7Ver = true;
bool RFVer = true;
bool RNFVer = true;

//Buzzer
const int Buzzer = 50;

//Color Sensor
const int S0 = 27;
const int S1 = 26;
const int S2 = 28;
const int S3 = 36;
const int Out = 2;
int rgbRed = 0;
int rgbGreen = 0;
int rgbBlue = 0;

//Vibrator
const int Vibrator = 3;

void setup () {
  Serial.begin(9600);

  //Buttons
  pinMode(BtnR1, INPUT);
  pinMode(BtnR2, INPUT);
  pinMode(BtnR3, INPUT);
  pinMode(BtnR4, INPUT);
  pinMode(BtnR5, INPUT);
  pinMode(BtnR6, INPUT);
  pinMode(BtnR7, INPUT);
  
  pinMode(BtnRF, INPUT);
  pinMode(BtnRNF, INPUT);

  //LEDs
  pinMode(LEDR1, OUTPUT);
  pinMode(LEDR2, OUTPUT);
  pinMode(LEDR3, OUTPUT);
  pinMode(LEDR4, OUTPUT);
  pinMode(LEDR5, OUTPUT);
  pinMode(LEDR6, OUTPUT);
  pinMode(LEDR7, OUTPUT);
  
  pinMode(LEDRF, OUTPUT);
  pinMode(LEDRNF, OUTPUT);

  //Buzzer
  pinMode(Buzzer, OUTPUT);
  
  //Color Sensor
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(Out, INPUT);

  //Vibrator
  pinMode(Vibrator, OUTPUT);
}

void loop () {
  RFID ();
  ClassiferR1 ();
  ClassiferR2 ();
  ClassiferR3 ();
  ClassiferR4 ();  
  ClassiferR5 ();
  ClassiferR6 ();
  ClassiferR7 ();  
  ClassiferRF ();
  ClassiferRNF ();
  BuzzerBeep ()
  ColorVerification ();
}

void ClassiferR1 (){
  StateR1 = digitalRead(BtnR1);
  if((StateR1 == HIGH) && (StateaR1 == LOW)){
    StateLEDR1 = 1 - StateLEDR1;
  }
  
  StateaR1 = StateR1;
  
  if(StateLEDR1 == 1){
    digitalWrite(LEDR1, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR1, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR2 (){
  StateR2 = digitalRead(BtnR2);
  if((StateR2 == HIGH) && (StateaR2 == LOW)){
    StateLEDR2 = 1 - StateLEDR2;
  }
  
  StateaR2 = StateR2;
  
  if(StateLEDR2 == 1){
    digitalWrite(LEDR2, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR2, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR3 (){
  StateR3 = digitalRead(BtnR3);
  if((StateR3 == HIGH) && (StateaR3 == LOW)){
    StateLEDR3 = 1 - StateLEDR3;
  }
  
  StateaR3 = StateR3;
  
  if(StateLEDR3 == 1){
    digitalWrite(LEDR3, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR3, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR4 (){
  StateR4 = digitalRead(BtnR4);
  if((StateR4 == HIGH) && (StateaR4 == LOW)){
    StateLEDR4 = 1 - StateLEDR4;
  }
  
  StateaR4 = StateR4;
  
  if(StateLEDR4 == 1){
    digitalWrite(LEDR4, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR4, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR5 (){
  StateR5 = digitalRead(BtnR5);
  if((StateR5 == HIGH) && (StateaR5 == LOW)){
    StateLEDR5 = 1 - StateLEDR5;
  }
  
  StateaR5 = StateR5;
  
  if(StateLEDR5 == 1){
    digitalWrite(LEDR5, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR5, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR6 (){
  StateR6 = digitalRead(BtnR6);
  if((StateR6 == HIGH) && (StateaR6 == LOW)){
    StateLEDR6 = 1 - StateLEDR6;
  }
  
  StateaR6 = StateR6;
  
  if(StateLEDR6 == 1){
    digitalWrite(LEDR6, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR6, LOW);
    Serial.println("RFb");
  }
}
void ClassiferR7 (){
  StateR7 = digitalRead(BtnR7);
  if((StateR7 == HIGH) && (StateaR7 == LOW)){
    StateLEDR7 = 1 - StateLEDR7;
  }
  
  StateaR7 = StateR7;
  
  if(StateLEDR7 == 1){
    digitalWrite(LEDR7, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDR7, LOW);
    Serial.println("RFb");
  }
}
void ClassiferRF (){
  StateRF = digitalRead(BtnRF);
  if((StateRF == HIGH) && (StateaRF == LOW)){
    StateLEDRF = 1 - StateLEDRF;
  }
  
  StateaRF = StateRF;
  
  if(StateLEDRF == 1){
    digitalWrite(LEDRF, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDRF, LOW);
    Serial.println("RFb");
  }
}
void ClassiferRNF (){
  StateRNF = digitalRead(BtnRNF);
  if((StateRNF == HIGH) && (StateaRNF == LOW)){
    StateLEDRNF = 1 - StateLEDRNF;
  }
  
  StateaRNF = StateRNF;
  
  if(StateLEDRNF == 1){
    digitalWrite(LEDRNF, HIGH);
    Serial.println("RFa");
  } else {
    digitalWrite(LEDRNF, LOW);
    Serial.println("RFb");
  }
}

void BuzzerBeep () {
  if (StateLEDR1 == 1 && StateLEDRF == 1 && R1Ver == true) {
    R1Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR1 == 1 && StateLEDRF == 1 && R1Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }

  if (StateLEDR2 == 1 && StateLEDRF == 1 && R2Ver == true) {
    R2Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR2 == 1 && StateLEDRF == 1 && R2Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }

  if (StateLEDR3 == 1 && StateLEDRNF == 1 && R3Ver == true) {
    R3Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR3 == 1 && StateLEDRNF == 1 && R3Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }

  if (StateLEDR4 == 1 && StateLEDRF == 1 && R4Ver == true) {
    R4Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR4 == 1 && StateLEDRF == 1 && R4Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  
  if (StateLEDR5 == 1 && StateLEDRNF == 1 && R5Ver == true) {
    R5Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR5 == 1 && StateLEDRNF == 1 && R5Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  
  if (StateLEDR6 == 1 && StateLEDRNF == 1 && R6Ver == true) {
    R6Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR6 == 1 && StateLEDRNF == 1 && R6Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }

  
  if (StateLEDR7 == 1 && StateLEDRF == 1 && R7Ver == true) {
    R7Ver = false;
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  } else if (StateLEDR7 == 1 && StateLEDRF == 1 && R7Ver == false) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
    
  if (StateLEDR1 == 1 && StateLEDRNF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR2 == 1 && StateLEDRNF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR3 == 1 && StateLEDRF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR4 == 1 && StateLEDRNF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR5 == 1 && StateLEDRF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR6 == 1 && StateLEDRF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
  if (StateLEDR7 == 1 && StateLEDRNF == 1) {
    digitalWrite(Buzzer, HIGH);
    delay(1000);
    digitalWrite(Buzzer, LOW);
    delay(0);
    StateLEDR1 = 0;
    StateLEDR2 = 0;
    StateLEDR3 = 0;
    StateLEDR4 = 0;
    StateLEDR5 = 0;
    StateLEDR6 = 0;
    StateLEDR7 = 0;
    StateLEDRF = 0;
    StateLEDRNF = 0;
  }
}

void Color () {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  rgbRed = pulseIn(rgb_out, digitalRead(Out) == HIGH ? LOW : HIGH);
  digitalWrite(S3, HIGH);
  rgbBlue = pulseIn(rgb_out, digitalRead(Out) == HIGH ? LOW : HIGH);
  digitalWrite(S2, HIGH);
  rgbGreen = pulseIn(rgb_out, digitalRead(Out) == HIGH ? LOW : HIGH);
}

void ColorVerification() {
  Color (); 
  if (rgbRed < rgbBlue && rgbGreen > rgbBlue && rgbRed < 35) {
    Serial.println("R");
    VibratorVerification ();
  } else if (rgbBlue < rgbRed && rgbBlue < rgbGreen && rgbGreen < rgbRed) {
    Serial.println("B");
    VibratorVerification ();
  } else if (rgbRed > rgbGreen && rgbBlue > rgbGreen) {
    Serial.println("G");
  }
}

void VibratorVerification () {
  digitalWrite(Vibrator, HIGH);
  delay(1000);
  digitalWrite(Vibrator, LOW);
  delay(0);
}

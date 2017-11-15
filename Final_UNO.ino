//Libraries
#include "SPI.h"
#include "MFRC522.h"
#include <Servo.h>

//RFID
#define SS_PIN 10
#define RST_PIN 9
#define SP_PIN 8

MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

//Button
const long BtnVer = 5;

//Verification
String VerificationStr = "";
bool VerR1 = true;
bool VerR2 = true;

//Servos
Servo ServoC;
Servo ServoI;
const long ServoC_PIN = 6;
const long ServoI_PIN = 7;

void setup () {
  Serial.begin(9600);

  //RFID
  SPI.begin();
  rfid.PCD_Init();

  //Button
  pinMode(BtnVer, INPUT);

  //Servos
  ServoC.attach(ServoC_PIN);
  ServoI.attach(ServoI_PIN);
}

void loop () {
  RFID ();
  Verification ();
  Serial.println ("Fase 1: "+VerificationStr);
}

void RFID () {
  
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial())
    return;
  
  MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
  // Serial.println(rfid.PICC_GetTypeName(piccType));
  
  if (piccType != MFRC522::PICC_TYPE_MIFARE_MINI &&
    piccType != MFRC522::PICC_TYPE_MIFARE_1K &&
    piccType != MFRC522::PICC_TYPE_MIFARE_4K) {
    Serial.println(F("Your tag is not of type MIFARE Classic."));
    return;
  }
  
  String strID = "";
  
  for (byte i = 0; i < 4; i++) {
    strID +=
    (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
    String(rfid.uid.uidByte[i], HEX) +
    (i!=3 ? ":" : "");
  }
  
  strID.toUpperCase ();
  
  if (strID == "BA:7D:3A:D5") {
    Serial.println("a");
    VerificationStr += "a"
  }
  else if (strID == "60:3C:21:1A") {
    Serial.println("b");
    VerificationStr += "b"
  }
  else if(strID == "60:3B:93:1A") {
    Serial.println("c");
    VerificationStr += "c"
  }
  else {
    Serial.println("d");
    VerificationStr += "d"
  }
  
  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}

void Verification (){
  stVerificar = digitalRead(btnVerificar);
  if (stVerificar == HIGH) {
    Serial.println('1');
  } else {
    Serial.println('0');
  }
  
  if (VerificationStr == "abc" && VerR1 == true) {
    ServoC.write(90);
    VerificationStr = "";
    VerR1 == false;
    delay(1000);
    ServoC.write(0);
    delay(0);
  }
  else if (VerificationStr == "abd" && VerR2 == true) {
    ServoC.write(90);
    VerificationStr = "";
    VerR2 == false;
    delay(1000);
    ServoC.write(0);
    delay(0);
  }
  else {
    ServoI.write(90);
    VerificationStr = "";
    delay(1000);
    ServoI.write(0);
    delay(0);
  }
}

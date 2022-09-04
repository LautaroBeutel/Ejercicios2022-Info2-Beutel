
#define time 100
#define J B00100000
#define R B00001000

int led = 5;

volatile boolean dir;
byte j = B00100000;
byte r = B00001000;

void change(){
  dir = !dir;
  digitalWrite(LED_BUILTIN, dir);
}

void setup() {
  Serial.begin(9600);
  DDRD = B00111000;
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(0, change, RISING);

}

void loop(){
  digitalWrite(led, HIGH);
  delay(time);
  PORTD = B00000000;
  if(dir){
    led--;
    if(led==2) led=5;
  }
  else{
    led++;
    if(led==6) led=3;
  }
}

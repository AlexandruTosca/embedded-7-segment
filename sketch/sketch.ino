int segment_DP = 6;
int segment_A = 7;
int segment_B = 8;
int segment_C = 9;
int segment_D = 10;
int segment_E = 11;
int segment_F = 12;
int segment_G = 13;

void setup() {
  
  pinMode(segment_A,OUTPUT); 
  pinMode(segment_B,OUTPUT);
  pinMode(segment_C,OUTPUT);
  pinMode(segment_D,OUTPUT);
  pinMode(segment_E,OUTPUT);
  pinMode(segment_F,OUTPUT);
  pinMode(segment_G,OUTPUT);
  pinMode(segment_DP,OUTPUT);

}
void reset(){
delay(500);
  for(int i=segment_DP;i<=segment_G;i++){
    digitalWrite(i,HIGH);
  }
delay(500);
}

void zero(){
  for(int i=segment_A;i<=segment_F;i++){
    digitalWrite(i,LOW);
  }
}

void one(){
 digitalWrite(segment_B,LOW);
 digitalWrite(segment_C,LOW);
}

void two(){
 digitalWrite(segment_A,LOW);
 digitalWrite(segment_B,LOW);
 digitalWrite(segment_G,LOW);
 digitalWrite(segment_D,LOW);
 digitalWrite(segment_E,LOW);
}

void three(){
 digitalWrite(segment_A,LOW);
 digitalWrite(segment_B,LOW);
 digitalWrite(segment_G,LOW);
 digitalWrite(segment_C,LOW);
 digitalWrite(segment_D,LOW);
}

void four(){
 digitalWrite(segment_F,LOW);
 digitalWrite(segment_G,LOW);
 digitalWrite(segment_B,LOW);
 digitalWrite(segment_C,LOW);
}

void five(){
  for(int i=segment_DP;i<=segment_G;i++){
    if((i!=segment_B)&&(i!=segment_E)&&(i!=segment_DP))
      digitalWrite(i,LOW);
  }
}

void six(){
  for(int i=segment_DP;i<=segment_G;i++){
    if((i!=segment_B)&&(i!=segment_DP))
      digitalWrite(i,LOW);
  }
}

void seven(){
  digitalWrite(segment_A,LOW);
  digitalWrite(segment_B,LOW);
  digitalWrite(segment_C,LOW);
}

void eight(){
  for(int i=segment_A;i<=segment_G;i++){
    digitalWrite(i,LOW);
  }
}

void nine(){
  for(int i=segment_A;i<=segment_G;i++){
    if((i!=segment_E)&&(i!=segment_DP))
    digitalWrite(i,LOW);
  }
}

void dp(){
  digitalWrite(segment_DP, LOW);
}

void loop() {

  reset();
  zero();
  reset();
  one();
  reset();
  two();
  reset();
  three();
  reset();
  four();
  reset();
  five();
  reset();
  six();
  reset();
  seven();
  reset();
  eight();
  reset();
  nine();
  reset();
  dp();

}



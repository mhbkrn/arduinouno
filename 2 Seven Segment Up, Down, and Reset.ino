//BCD 1

int a1 = 7; //Bit 0 Decoder 1
int a2 = 9; //Bit 1 Decoder 1
int a3 = 10; //Bit 2 Decoder 1
int a4 = 11; //Bit 3 Decoder 1

//BCD 2
int b1 = 2; //Bit 0 Decoder 2
int b2 = 3; //Bit 1 Decoder 2
int b3 = 4; //Bit 2 Decoder 2
int b4 = 6; //Bit 3 Decoder 2

int n=0; //Setting initial value of n to 0
int d1;
int d2;
int buttonUP = 12;
int buttonDOWN = 8;
int buttonZERO = 5;
int state = 0;

void setup()
{
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(buttonUP,INPUT);
pinMode(buttonDOWN, INPUT);
pinMode(buttonZERO, INPUT);
}

void loop()
{
 state = digitalRead(buttonUP);
 if(state == HIGH)
 {
   n++;
 }
 if(n==100)
 {
   n=0;
 }
 d1=n%10; // This will divide n by 10 and the remainder will be stored in d1
 d2=n/10; // This will divide n by 10 and the value before decimal will be stored in d2
 disp1(d1);
 disp2(d2);
 delay(100);//100 ms delay to debounce
  
  state = digitalRead(buttonDOWN);
 if(state == HIGH)
 {
   n--;
 }
 d1=n%10; // This will divide n by 10 and the remainder will be stored in d1
 d2=n/10; // This will divide n by 10 and the value before decimal will be stored in d2
 disp1(d1);
 disp2(d2);
 delay(100);//100 ms delay to debounce
  
  state = digitalRead(buttonZERO);
 if(state == HIGH)
 {
   n=0;
 }
 d1=n%10; // This will divide n by 10 and the remainder will be stored in d1
 d2=n/10; // This will divide n by 10 and the value before decimal will be stored in d2
 disp1(d1);
 disp2(d2);
 delay(100);//100 ms delay to debounce
}
void disp1(int num)
{
  if(num == 0)//0000
  {
    digitalWrite(a1, LOW); 
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 1)//0001
  {
    digitalWrite(a1, HIGH);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
  }
  if(num == 2)//0010
  {
    digitalWrite(a1, LOW);//0
    digitalWrite(a2, HIGH);//1
    digitalWrite(a3, LOW);//0
    digitalWrite(a4, LOW);//0
  }
  if(num == 3)//0011
  {
    digitalWrite(a1, HIGH);//1
    digitalWrite(a2, HIGH);//1
    digitalWrite(a3, LOW);//0
    digitalWrite(a4, LOW);//0
  }
  if(num == 4)//0100
  {
    digitalWrite(a1, LOW);//0
    digitalWrite(a2, LOW);//0
    digitalWrite(a3, HIGH);//1
    digitalWrite(a4, LOW);//0
  }
  if(num == 5)//0101
  {
    digitalWrite(a1, HIGH);//1
    digitalWrite(a2, LOW);//0
    digitalWrite(a3, HIGH);//1
    digitalWrite(a4, LOW);//0
  }
  if(num == 6)//0110
  {
    digitalWrite(a1, LOW);//0
    digitalWrite(a2, HIGH);//1
    digitalWrite(a3, HIGH);//1
    digitalWrite(a4, LOW);//0
  }
  if(num == 7) //0111
  {
    digitalWrite(a1, HIGH);//1
    digitalWrite(a2, HIGH);//1
    digitalWrite(a3, HIGH);//1
    digitalWrite(a4, LOW);//0
  }
  if(num == 8) //1000
  {
    digitalWrite(a1, LOW);//0
    digitalWrite(a2, LOW);//0
    digitalWrite(a3, LOW);//0
    digitalWrite(a4, HIGH);//1
  }
  if(num == 9)//1001
  {
    digitalWrite(a1, HIGH);//1
    digitalWrite(a2, LOW);//0
    digitalWrite(a3, LOW);//0
    digitalWrite(a4, HIGH);//1
  }
}

void disp2(int num)
{
  if(num == 0)//0000
  {
    digitalWrite(b1, LOW);//
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, LOW);//0
  }
  if(num == 1)//0001
  {
    digitalWrite(b1, HIGH);//1
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, LOW);//0
  }
  if(num == 2)//0010
  {
    digitalWrite(b1, LOW);//0
    digitalWrite(b2, HIGH);//1
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, LOW);//0
  }
  if(num == 3)//0011
  {
    digitalWrite(b1, HIGH);//1
    digitalWrite(b2, HIGH);//1
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, LOW);//0
  }
  if(num == 4)//0100
  {
    digitalWrite(b1, LOW);//0
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, HIGH);//1
    digitalWrite(b4, LOW);//0
  }
  if(num == 5) //0101
  {
    digitalWrite(b1, HIGH);//1
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, HIGH);//1
    digitalWrite(b4, LOW);//0
  }
  if(num == 6) //0110
  {
    digitalWrite(b1, LOW);//0
    digitalWrite(b2, HIGH);//1
    digitalWrite(b3, HIGH);//1
    digitalWrite(b4, LOW);//0
  }
  if(num == 7) //0111
  {
    digitalWrite(b1, HIGH);//1
    digitalWrite(b2, HIGH);//1
    digitalWrite(b3, HIGH);//1
    digitalWrite(b4, LOW);//0
  }
  if(num == 8) //1000
  {
    digitalWrite(b1, LOW);//0
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, HIGH);//1
  }
  if(num == 9)//1001
  {
    digitalWrite(b1, HIGH);//1
    digitalWrite(b2, LOW);//0
    digitalWrite(b3, LOW);//0
    digitalWrite(b4, HIGH);//1
  }
}

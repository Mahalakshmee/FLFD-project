#include <LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int buttonone = A1;
const int buttontwo = A2;
const int buttonthree = A3;
const int buttonfour = A0;

const int motor = 11;

int onebuttonState;
int secbuttonState;
int threebuttonState;
int fourbuttonState;
int total=0, stotal=0, ftotal=0;
int a=100;
int sstart=0;
int sstop=0;
int vcount=0, m=0, n=0;
String ttl;
String card;
 
void setup(){ 
    pinMode(buttonone, INPUT);
    pinMode(buttontwo, INPUT); 
    pinMode(buttonthree, INPUT);
    pinMode(buttonfour, INPUT);
    digitalWrite(buttonone, HIGH);
    digitalWrite(buttontwo, HIGH);
    digitalWrite(buttonthree, HIGH);
    digitalWrite(buttonfour, HIGH);
    pinMode(motor, OUTPUT);
    digitalWrite(motor, LOW);
    lcd.clear();
    lcd.begin(16, 2);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("   IOT BASED");
    lcd.setCursor(0,1);
    lcd.print("FUEL DISPATCHING");
    Serial1.begin(9600);
    Serial.begin(115200);        
    delay(2000);
}
 
void loop(){

onebuttonState = digitalRead(buttonone);
secbuttonState = digitalRead(buttontwo);
threebuttonState = digitalRead(buttonthree);
fourbuttonState = digitalRead(buttonfour);

if (Serial1.available())
    {
    card = Serial1.readString();   
  Serial.println(card);
    }
    
if(card == "870080410244" && n==0)
{
  stotal = 800;
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("NAME : BOOMI");
  lcd.setCursor(0,1);
  lcd.print("AVL AMOUNT : "); 
  lcd.print(stotal);
  n=1;
  card=""; 
}
if(card == "87009229D8E4" && n==0)
{
  stotal = 500;
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("NAME : DEEPI");
  lcd.setCursor(0,1);
  lcd.print("AVL AMOUNT : "); 
  lcd.print(stotal);
  n=1;
  card="";
  
}

if (onebuttonState == LOW)
{
  total = total + a;
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("AVL AMOUNT: "); 
  lcd.print(stotal);  
  lcd.setCursor(0,1);
  lcd.print("ENTER AMT:");  
  lcd.print(total);
  m=1;
}
if (secbuttonState == LOW)
{
  total = total - a;
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("AVL AMOUNT: "); 
  lcd.print(stotal);  
  lcd.setCursor(0,1);
  lcd.print("ENTER AMT:");  
  lcd.print(total);
  m=1;
}

if (fourbuttonState == LOW && m==1)
{
  
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("FUEL DISPATCHING");
  lcd.setCursor(0,1);
  lcd.print("TYPE : PETROL");  
  ftotal = 10*total;
  digitalWrite(motor, HIGH);     
  delay(ftotal);  
  digitalWrite(motor, LOW);     
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("    FUEL");
  lcd.setCursor(0,1);
  lcd.print("DISPATCHED SUCCESS");  
  delay(2000);  
  total = 0;
  m=0;
  
}
if (threebuttonState == LOW && m==1)
{
  
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("FUEL DISPATCHING");
  lcd.setCursor(0,1);
  lcd.print("TYPE : DIESEL");  
  ftotal = 10*total;
  digitalWrite(motor, HIGH);     
  delay(ftotal);  
  digitalWrite(motor, LOW);     
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("    FUEL");
  lcd.setCursor(0,1);
  lcd.print("DISPATCHED SUCCESS");  
  delay(2000);  
  total = 0;
  m=0;
  
}

    delay(500);
  
 }

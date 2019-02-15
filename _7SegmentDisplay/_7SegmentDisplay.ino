int a = 52;
int b = 53;
int c = 51;
int d = 50;
int e = 49;
int f = 48;
int g = 47;
int var;
int newData;


void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

}




void loop() {
  delay(2000);
  //1

 if(Serial.available()>0){
    var = Serial.read();
    newData = true;
 }else{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  
 }

if(newData){
   if(var == '1' || var == '4' || var == 'b' || var == 'd'){
    digitalWrite(a, LOW);
   }else{
    digitalWrite(a, HIGH);
   }

   if(var == '6' || var == '5' || var == 'b' || var == 'c' || var == 'e' || var == 'f'){
    digitalWrite(b, LOW);
   }else{
    digitalWrite(b, HIGH);
   }

   if(var == '2' || var == 'c' || var == 'e' || var == 'f'){
    digitalWrite(c, LOW);
   }else{
    digitalWrite(c, HIGH);
   }

   if(var == '1' || var =='4' || var == '7' || var == '9' || var == 'a' || var == 'f'){
    digitalWrite(d, LOW);
   }else{
    digitalWrite(d, HIGH);
   }

   
   if(var == '1' || var =='3' || var == '7' || var == '4' || var == '5' || var == '9'){
    digitalWrite(e, LOW);
   }else{
    digitalWrite(e, HIGH);
   }

   
   if(var == '1' || var == '7' || var == '2' || var == '3' || var == 'd'){
    digitalWrite(f, LOW);
   }else{
    digitalWrite(f, HIGH);
   }

   
   if(var == '0' || var == '1' || var == '7' ||  var == 'c'){
    digitalWrite(g, LOW);
   }else{
    digitalWrite(g, HIGH);
   }



 }

    

}

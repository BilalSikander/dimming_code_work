const int D3 = 15;
const int D2 = 2;
const int D1 = 4;
const int D0 = 5;
const int Pins[4]={D3, D2, D1, D0};
int n=2; //change delay value here
int count;
void setup()
{

pinMode (D3, OUTPUT);
pinMode (D2, OUTPUT);
pinMode (D1, OUTPUT);
pinMode (D0, OUTPUT);
}
void loop()
{
digitalWrite(D3,0);
digitalWrite(D2,1);
digitalWrite(D1,1);
digitalWrite(D0,1);


}

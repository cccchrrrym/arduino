const int buzzer = 10; 
const int songspeed = 1.5;
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_D2  73
#define NOTE_E2  82
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  987
#define NOTE_C6  1047
#define NOTE_D6  1175
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_D7  2349
#define NOTE_E7  2637

int notes[] = {

NOTE_E5, NOTE_E5, NOTE_E5, 0, 
NOTE_E5, NOTE_E5, NOTE_E5, 0, 
NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
NOTE_G3, NOTE_A3, 0,

NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5,
NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5,0,
//NOTE_G4, NOTE_G5, NOTE_A3, 0,
NOTE_G4, NOTE_A3, 0,

NOTE_E5, NOTE_E5, NOTE_E5, 0, 
NOTE_E5, NOTE_E5, NOTE_E5, 0, 
NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
NOTE_G3, NOTE_A3, 0,

NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5,
NOTE_G5, NOTE_G5, NOTE_A5, NOTE_B5,
NOTE_B6, NOTE_C6, 0, NOTE_C3, 0,
};


int duration[] = {   

320, 340, 420, 150,
320, 330, 420, 150,
300, 300, 300, 300,
40, 800, 150,

320, 320, 320, 320,
320, 320, 320, 320,
320, 320, 320, 320, 320, 200,
//40, 400, 80, 125,
40, 700, 100,

320, 340, 410, 150,
320, 330, 410, 150,
300, 300, 300, 300,
40, 700, 150,

320, 340, 410, 150,
320, 330, 410, 150,
300, 300, 320, 300,
50, 900, 120, 600, 700,
    
};

void setup() {

}

void loop() {

  for (int i=0; i<64; i++){            
  int wait = duration[i] * songspeed;
  tone(buzzer,notes[i],wait);          //tone(pin,frequency,duration)
  delay(wait);
  }
  
}

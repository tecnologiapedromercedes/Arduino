/*
  PIANO usando pulsadores
  https://paruro.pe/aprende/arduino/otros/piano-usando-pulsadores
*/

// se definen las constantes
// se declaran las frecuencia de las notas básicas
const int NOTA_DO  = 262;
const int NOTA_RE  = 294;
const int NOTA_MI  = 330;
const int NOTA_FA  = 349;
const int NOTA_SOL = 392;
const int NOTA_LA  = 440;
const int  NOTA_SI  = 494;

// se declaran los pines asociados a las notas básicas
const int pulsador_DO  = 8;
const int pulsador_RE  = 7;
const int pulsador_MI  = 6;
const int pulsador_FA  = 5;
const int pulsador_SOL = 4;
const int pulsador_LA  = 3;
const int pulsador_SI  = 2;

// se define las notas que se reproducirán
int notas_basicas[ ] = {NOTA_DO, NOTA_RE, NOTA_MI, NOTA_FA, NOTA_SOL, NOTA_LA, NOTA_SI};
int pulsadores   [ ] = {pulsador_DO, pulsador_RE, pulsador_MI, pulsador_FA,
                                pulsador_SOL, pulsador_LA, pulsador_SI};
int pulsador_activado = 0;

void setup() {
  // se define los pines de entrada y salida
  for(int pin=6; pin>0; pin--) {
      pinMode(pulsadores[pin] , INPUT);
  } 
}

void loop() {
int pulsador_actual; // se declara como variable local
  // el bucle analiza el estado de los 7 pulsadores
  for (int pulsador=0; pulsador<7; pulsador++) {
    pulsador_actual = digitalRead(pulsadores[pulsador]); // se lee el estado del pulsador
      // si se presiono, se procede a reproducir la nota asociada
       if (pulsador_actual == HIGH) {
         tone(13, notas_basicas[pulsador]); // reproduce la nota
         // grabamos el pulsador que ha sido apretado
         pulsador_activado = pulsadores[pulsador];
         break;
       }
  }
  // su soltamos el pulsador activo apagamos cortamos el sonido
  if (digitalRead(pulsador_activado) == LOW) {
    noTone(13);
  }
}

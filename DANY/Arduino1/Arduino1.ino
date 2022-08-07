#include "LedControl.h"

LedControl lc =LedControl(51,52,53,1);//puertos para driver de matriz

//MATRIZ DE LETRAS        
int figura[132][8]={
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 
   
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,1,1,0,0,1,0},
  {0,1,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 
 
  {0,1,1,0,0,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,0,1,1,0},
  {0,0,0,1,1,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
   
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,1,0,0,1,0,0,0},
  {0,1,0,0,0,1,0,0},
  {0,1,1,1,1,1,1,0},
  {0,1,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
                          
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0}, 

  {0,0,0,0,0,0,0,0},
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,1,1,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,0,1,1,0,0,0,0},
  {0,0,0,0,0,0,0,0},

  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,1,1,0,0,1,0},
  {0,1,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,1,0},
  {0,1,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},
  {0,0,1,1,1,1,1,0},
  {0,0,0,0,0,0,0,0}, 
                      
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,0,1,0,1,0,0},
  {0,0,1,1,1,1,1,0},
  {0,0,0,1,0,1,0,0},
  {0,0,1,1,1,1,1,0},
  {0,0,0,1,0,1,0,0},
  {0,0,0,0,0,0,0,0},
 
  {0,1,1,0,0,1,0,0},
  {0,1,0,1,0,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,0,1,0,0},
  {0,0,0,0,0,0,0,0}, 
    
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0}, 
                    //^PRAC1-GRUPO##-SECC A^ 
  {0,0,0,0,0,0,0,0},
  {0,1,0,0,0,1,0,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,0,1,1,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,1,1,1,1,1,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},
  
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},

  {0,1,1,0,0,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,0,1,1,0},
  {0,0,0,1,1,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
   
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,0,0,0,0},
 
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}, 
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}, 
  {0,0,0,0,0,0,0,0}

};

int juegoEmpezado = 0; //Mostrar mensaje
int pot = A2;//potenciometro velocidad letras 
int dir = 22;//direccion de las letras
unsigned long tiempo;//tiempo de movimiento de las letras
unsigned long tiempoStar;//tiempo de botón precionado.
unsigned long tiempoPausar;//tiempo de botón pausar precionado. 
int fActual=0;//fila de la matriz de letras con la que se empieza a pintar la matriz de leds
int boton = 23;//botonStart
int estadoAnteriorBtnStart = 1; 
int flag0 = 0;//bandera de inicio de contador tiempoStar
int flag1 = 0;//bandera de inicio de para quitar pausa 
int estadoBtnDer = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnDer = 1;//estado anterior del pusador, pulso en 0
int estadoBtnIzq = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnIzq = 1;//estado anterior del pusador, pulso en 0
int estadoBtnDisp = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnDisp = 1;//estado anterior del pusador, pulso en 0
long randomNumber;
int punteo = 0;//punteo del juego

void setup() {
  digitalWrite(27,HIGH); 
  pinMode(27,OUTPUT); 
  tiempo = millis();
  tiempoStar = millis();
  randomSeed(analogRead(A1));
  Serial.begin(9600);
  pinMode(dir,INPUT);
  pinMode(boton, INPUT);  
  
  for (int i = 31; i<39; i++){
    pinMode(i,OUTPUT); 
  }
  for (int i = 41; i<49; i++){
    pinMode(i,OUTPUT);
  } 
  for(int i=41; i<49; i++){
    digitalWrite(i, HIGH);
  }
  //PARAMETROS INICIALES MATRIZ 2
  lc.shutdown(0,false);
  lc.setIntensity(0,15);
  lc.clearDisplay(0); 
}


//----PINTAR MATRIZ 1 DE LETRAS----
void pintar(int f){
  
  for (int i=0; i<8; i++){
    digitalWrite(i+31, HIGH);
    for(int j=0; j<8; j++){
      if (figura[i+f][j] == 1){ 
        digitalWrite(j+41, LOW);
      }
    }
    delay(1); 
    digitalWrite(i+31, LOW); 
    for(int j=41; j<49; j++){
      digitalWrite(j, HIGH); 
    }    
  } 
  pintarSegundaMatriz(f+8);
}

//----PINTAR MATRIZ 2 DE LETRAS----
void pintarSegundaMatriz(int f){ 
  for (int columna = 0; columna <8; columna++){
    for(int fila = 0; fila <8; fila++){
      if(figura[columna+f][fila] == 1){
        lc.setLed(0,fila,columna,true);
      }
    }
    delay(1); 
  }
}

//----FUNCION DE PINTADO DE NOMBRES----
void pintarNombres(int lectura){
  if (digitalRead(dir)==LOW){ 
    if (millis()-tiempo >lectura){ 
      fActual++;
      tiempo = millis();
      lc.clearDisplay(0);
    }
    if (fActual ==117){ 
      fActual = 0;
    }
    pintar(fActual);  
  }
  if (digitalRead(dir)==HIGH){ 
    if (millis()-tiempo >lectura){ 
      fActual--;
      tiempo = millis();
      lc.clearDisplay(0);
    }
    if (fActual ==-1){ 
      fActual = 117;
    }
    pintar(fActual);  
  }
}

//----MAIN----
void loop() {
  //MOSTRANDO MENSAJE 
  if(juegoEmpezado == 0){
    pintarNombres(analogRead(pot));
  }
}

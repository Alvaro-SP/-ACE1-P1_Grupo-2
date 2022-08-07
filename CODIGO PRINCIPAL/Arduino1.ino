#include "LedControl.h"

LedControl lc =LedControl(51,52,53,1);//puertos para driver de matriz

//MATRIZ DE LETRAS        
int figura[132][8]={
                      //^PRAC1-GRUPO02-SECC A^ 
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0}, //^
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,1,0,0,1,0},//P
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 
   
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,1,1,0,0,1,0},//R
  {0,1,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 
 
  {0,1,1,0,0,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,0,1,1,0},//A
  {0,0,0,1,1,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
   
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},//C
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,1,0,0,1,0,0,0},
  {0,1,0,0,0,1,0,0},
  {0,1,1,1,1,1,1,0},//1
  {0,1,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
                          
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},//-
  {0,0,0,1,1,0,0,0}, 

  {0,0,0,0,0,0,0,0},
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,1,1,0,1,0},//G
  {0,1,0,0,1,0,1,0},
  {0,0,1,1,0,0,0,0},
  {0,0,0,0,0,0,0,0},

  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,1,1,0,0,1,0},//R
  {0,1,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,1,0},
  {0,1,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},//U
  {0,1,0,0,0,0,0,0},
  {0,0,1,1,1,1,1,0},
  {0,0,0,0,0,0,0,0}, 
                      
  {0,1,1,1,1,1,1,0},
  {0,0,0,1,0,0,1,0},
  {0,0,0,1,0,0,1,0},//P
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},//O
  {0,1,0,0,0,0,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}, 

  {0,1,1,1,1,1,1,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},//0
  {0,1,1,1,1,1,1,0},
  {0,0,0,0,0,0,0,0},
 
  {0,1,1,0,0,1,0,0},
  {0,1,0,1,0,0,1,0},
  {0,1,0,0,1,0,1,0},//2
  {0,1,0,0,0,1,0,0},
  {0,0,0,0,0,0,0,0}, 
    
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},//-
  {0,0,0,1,1,0,0,0}, 

  {0,0,0,0,0,0,0,0},
  {0,1,0,0,0,1,0,0},
  {0,1,0,0,1,0,1,0},//S
  {0,1,0,0,1,0,1,0},
  {0,0,1,1,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,1,1,1,1,1,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,0},//E
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0}, 

  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},//C
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},
  
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},//C
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,0},

  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},// BLANCO

  {0,1,1,0,0,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,0,1,1,0},//A
  {0,0,0,1,1,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
   
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},//BLANCO
  
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},//^
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

int jugador[16][8]={
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
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,1,1,1,0,0,0}
};

int balas[16][8]={
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
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
};

int naves[19][8]={
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
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0}
};

int cero[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,1,1,1,0},
  {0,1,1,1,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};


int uno[8][8]={
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,1,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int dos[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,1,1,0,0,0,0},
  {0,1,1,1,1,1,1,0},
  {0,0,0,0,0,0,0,0}
};

int tres[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int cuatro[8][8]={
  {0,0,1,0,0,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,1,1,0,1,1,0,0},
  {0,1,1,0,1,1,0,0},
  {0,1,1,1,1,1,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int cinco[8][8]={
  {0,1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0,0},
  {0,1,1,0,0,0,0,0},
  {0,1,1,1,1,1,0,0},
  {0,0,0,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int seis[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,0,0,0},
  {0,1,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int siete[8][8]={
  {0,1,1,1,1,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,0,0,0,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,0,0,0,0,0}
};

int ocho[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int nueve[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};

int question[8][8]={
  {0,0,1,1,1,1,0,0},
  {0,1,1,0,0,1,1,0},
  {0,0,0,0,0,1,1,0},
  {0,0,0,1,1,1,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0,0},
  {0,0,0,0,0,0,0,0}
};

int pot = A2;//potenciometro velocidad letras
int pot2 = A0;//potenciometro velocidad juego
int dir = 22;//direccion de las letras
unsigned long tiempo;//tiempo de movimiento de las letras
unsigned long tiempoStar;//tiempo de botón precionado.
unsigned long tiempoPausar;//tiempo de botón pausar precionado.
unsigned long tiempoBalas;//tiempo para movimiento de balas
unsigned long tiempoNaves;//tiempo para movimiento de naves
unsigned long tiempoGameOver;//tiempo en que muestra punteo luego de perder
int fActual=0;//fila de la matriz de letras con la que se empieza a pintar la matriz de leds
int boton = 23;//botonStart
int estadoAnteriorBtnStart = 1;
int btnder = 24;//boton derecha
int btndisp = 25;//boton disparar
int btnizq = 26;//boton izquierda
int juegoEmpezado = 0;//bandera de inicio de juego
int flag0 = 0;//bandera de inicio de contador tiempoStar
int flag1 = 0;//bandera de inicio de para quitar pausa
int posJugador = 2;//posicion del jugador
int estadoBtnDer = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnDer = 1;//estado anterior del pusador, pulso en 0
int estadoBtnIzq = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnIzq = 1;//estado anterior del pusador, pulso en 0
int estadoBtnDisp = 1;//estadoActual del pusador, pulso en 0
int estadoAnteriorBtnDisp = 1;//estado anterior del pusador, pulso en 0
long randomNumber;
int punteo = 0;//punteo del juego

int derecha = 0;
int izquierda = 0;
int aceptarCambio = 0;

void setup() {
  digitalWrite(27,HIGH);//puerto 27 que va a el reset se coloca en positivo
  pinMode(27,OUTPUT);//se declara que puerto 27 como salida
  tiempo = millis();
  tiempoStar = millis();
  randomSeed(analogRead(A1));//A1 puerto analogo de ruido(simulado con potenciometro)
  //INICIAMOS TODOS PUERTOS NECESARIOS
  Serial.begin(9600);
  pinMode(dir,INPUT);
  pinMode(boton, INPUT);
  pinMode(btnder,INPUT);
  pinMode(btndisp,INPUT);
  pinMode(btnizq,INPUT);
  
  for (int i = 31; i<39; i++){
    pinMode(i,OUTPUT); 
  }
  for (int i = 41; i<49; i++){
    pinMode(i,OUTPUT);
  }
  //limpia las columnas encendidas matriz1
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
    //habilitamos fila con HIGH
    digitalWrite(i+31, HIGH);
    for(int j=0; j<8; j++){
      if (figura[i+f][j] == 1){
        //encendemos led con LOW
        digitalWrite(j+41, LOW);
      }
    }
    delay(1);//después de pintar una fila completa esperamos un milisegundo
    digitalWrite(i+31, LOW);//desabilitamos fila con LOW
    for(int j=41; j<49; j++){
      digitalWrite(j, HIGH);//apagamos columnas con HIGH
    }    
  }
  //Luego de pintar primera Matriz llamamos a pintar Segunda ya que el método es diferente
  pintarSegundaMatriz(f+8);
}

//----PINTAR MATRIZ 2 DE LETRAS----
void pintarSegundaMatriz(int f){
  //Se maneja columna fila por el recorrido de la matriz física
  //como la matriz está volteada si se están recorriendo por filas visualmente
  for (int columna = 0; columna <8; columna++){
    for(int fila = 0; fila <8; fila++){
      if(figura[columna+f][fila] == 1){
        lc.setLed(0,fila,columna,true);
      }
    }
    delay(1);//despues de pintar la "fila visual" esperamos 1 milisegundo
    //la matriz2 se borra completa al cambiar la variable tiempo con el potenciometro
  }
}

//----FUNCION DE PINTADO DE NOMBRES----
int cambiarDer = 0;  
int cambiarIzq = 0;

void pintarNombres(int lectura){
  int antIzq = izquierda;
  int antDer = derecha;
  
  if(digitalRead(btnder) == LOW){ 
      if(izquierda == 1){
         izquierda = 0;
      }
      derecha = 1;
  }

  if(digitalRead(btnizq) == LOW){ 
      if(derecha == 1){
         derecha = 0;
      }
      izquierda = 1; 
  }

  if(digitalRead(boton) == LOW){ 
      if(antDer == 1){ 
          cambiarDer = 1;
          cambiarIzq = 0;
      }else if(antIzq == 1){ 
          cambiarDer = 0;
          cambiarIzq = 1;
      }
  }

  
  if(cambiarDer == 1){  
    if (millis()-tiempo >lectura){ 
      fActual--;
      tiempo = millis();
      lc.clearDisplay(0);
    }
    if (fActual ==-1){ 
      fActual = 117;
    }  
    pintar(fActual);  
  }else{
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
  
  if(cambiarIzq == 1){
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

}

//----EVALUA EL TIEMPO QUE LLEVA PRECIONADO EL BOTÓN STAR----
void esperarStar(){
  if(digitalRead(boton)==LOW){//EL BOTÓN FUNCIONA CON PULSOS NEGATIVOS
    if ((juegoEmpezado == 2)&&(estadoAnteriorBtnStart == 1)){
      flag1 = 1;
      tiempoPausar = millis();
    }else if (flag0 == 0){//SI ES PRIMERA DETECCIÓN DE PULSO
        flag0 = 1;//ACTIVA BANDERA DE CONTEO
        tiempoStar = millis();//INICIA CONTADOR
    }else{
      if(millis()-tiempoStar>3000){//SI EL CONTADOR YA LLEVA 3 SEGUNDOS
        flag0 = 0;
        switch(juegoEmpezado){
          case 0:
            juegoEmpezado = 1;//EMPIEZA JUEGO
            Serial.println("Juego empezado");
            break;
          case 1:
            juegoEmpezado = 2;//PAUSA EL JUEGO
            //APAGAMOS MANUALMENTE ULTIMAS DOS FILAS DE LA SEGUNDA MATRIZ
            for(int i=0; i<8; i++){
              lc.setLed(0,14,i,false);
              lc.setLed(0,15,i,false);
            }
            break;
          case 2:
            digitalWrite(27,LOW);//REINICIA EL PROGRAMA
            break;
        }
        lc.clearDisplay(0);//BORRA SEGUNDA MATRIZ
      }
    }
  }else{//SI NO ESTÁ ACTIVO EL BOTÓN START
    //SI EL BOTON STAR NO ESTÁ ACTIVO SE DETUBO LA PULSACIÓN
    if((flag0==1)&&(flag1==1)){
      //VERIFICAMOS SI LA PULSACIÓN DURÓ MENOS DE 3 SEGUNDOS REGRESAMOS AL JUEGO (QUITAMOS PAUSA)
      if(millis()-tiempoStar<3000){
        juegoEmpezado = 1;
        lc.clearDisplay(0);
        flag1=0;//DESACTIVAMOS BANDERA DE CONTEO DE TIEMPO DE PULSACIÓN PARA PAUSA
      }
    }
    flag0 = 0;
  }
  estadoAnteriorBtnStart=digitalRead(boton);//ASIGNAMOS EL ESTADO ANTERIOR AL BOTON START
}

//----MOVIMIENTO JUGADOR----
//reescribe ultimas dos filas de matriz jugador, recibe el punto en que se enuentra jugador
void moverMatrizJugador(int posJugador){
  for(int i=14; i<16; i++){
    for(int j=0; j<8; j++){
        if(i==14){//EN ESTA FILA SOLO ESCRIBE UN 1 Y EL RESTO CEROS
          if(j==posJugador+1){
            jugador[i][j]=1;
          }else{
            jugador[i][j]=0;
          }
        }else{//EN LA SIGUIENTE FILA ESCRIBE 3 UNOS Y EL RESTO CEROS
          if((j>=posJugador)&&(j<posJugador+3)){
            jugador[i][j]=1;
          }else{
            jugador[i][j]=0;
          }
        }
    }
  }
}

//----MOVIMIENTO BALAS----
void moverMatrizBalas(){
  //SUBE FILA N+1 A FILA N Y LA ULTIMA FILA LA LLENA DE CEROS
  for(int i=0; i<16; i++){
    for(int j=0; j<8; j++){
        if(i!=15){
          balas[i][j]=balas[i+1][j];
        }else{
          balas[i][j]=0;
        }
    }
  }
}

//----MOVIMIENTO BALAS----
void moverMatrizNaves(){
  //BAJA FILA N-1 A FILA N, Y EN FILA 0 AGREGA CEROS
  for(int i=18; i>=0; i--){
    for(int j=0; j<8; j++){
        if(i>0){
          naves[i][j]=naves[i-1][j];
        }else{
          naves[i][j]=0;
        }
    }
  }
  int flagVacias = 1;//1 si las celdas estan vacias(bandera)
  for (int j=0; j<8; j++){
    if((naves[3][j]==1)||(naves[4][j]==1)){
      flagVacias=0;// vuelve 0 la bandera si al menos una celda está ocupada
    }
  }
  //si las celdas estan vacias la bandera permanece en 1 por lo que se agrega una nueva nave con random
  if (flagVacias == 1){
    randomNumber = random(1,6);
    //Serial.println(randomNumber);
    naves[0][randomNumber+1]=1;
    naves[1][randomNumber]=1;
    naves[1][randomNumber+1]=1;
    naves[1][randomNumber+2]=1;
    naves[2][randomNumber+1]=1;
  }
}

//----CORAZON DEL JUEGO----
void juego2(){
  if (millis()-tiempoBalas >50){//CONTROLA TIEMPO DE MOVIMIENTO
    moverMatrizBalas();
    comprobarDisparos();
    tiempoBalas = millis();
    lc.clearDisplay(0);
  }
  if (millis()-tiempoNaves >analogRead(pot2)){//CONTROLA TIEMPO DE MOVIMIENTO
    moverMatrizNaves();
    comprobarDisparos();
    comprobarChoques();
    tiempoNaves = millis();
    lc.clearDisplay(0);
  }

  pintarCampoJuego1();
  estadoBtnDer = digitalRead(btnder);
  estadoBtnIzq = digitalRead(btnizq);
  estadoBtnDisp = digitalRead(btndisp);

  //SE VERIFICA ESTADO ANTERIOR PARA EVITAR ENVIO DE DISPAROS Y MOVIMIENTOS MAYORES A 1

  //EN CASO DE DISPARO
  if(estadoBtnDisp == LOW){
    if((estadoBtnDisp == LOW)&&(estadoAnteriorBtnDisp == HIGH)){
      Serial.println("Disparo");
      //AGREGAMOS LA BALA A LA MATRIZ EN LA POSICIÓN DEL CAÑON
      balas[15][posJugador+1]=1;
    }
  }
  //EN CASO DE MOVIMIBENTO A LA DERECHA  
  if(estadoBtnDer == LOW){
    if((estadoBtnDer == LOW)&&(estadoAnteriorBtnDer == HIGH)){
      Serial.println("Derecha");
      if (posJugador>0){
        posJugador--;
        moverMatrizJugador(posJugador);
        comprobarChoques();//COMPROBAMOS SI EXISTEN CHOQUES
      }
      lc.clearDisplay(0);
      pintarCampoJuego1();
    }
  }
    //EN CASO DE MOVIMIBENTO A LA IZQUIERDA  
  if(estadoBtnIzq == LOW){
    if((estadoBtnIzq == LOW)&&(estadoAnteriorBtnIzq == HIGH)){
      Serial.println("Izquierda");
      if (posJugador <5){
        posJugador++;
        moverMatrizJugador(posJugador);
        comprobarChoques();//COMPROBAMOS SI EXISTEN CHOQUES
      }
      lc.clearDisplay(0);
      pintarCampoJuego1();
    }
  }
  //GUARDAMOS LOS ESTADOS DE LOS BOTONES PARA EL SIGUIENTE CICLO
  estadoAnteriorBtnDer = estadoBtnDer;
  estadoAnteriorBtnIzq = estadoBtnIzq;
  estadoAnteriorBtnDisp = estadoBtnDisp;
}

//----COMPROBACIÓN DE CHOQUE DE NAVES Y JUGADOR----
void comprobarChoques(){
  for (int i=14; i<16; i++){
    for(int j=0; j<8; j++){
      //SI EXISTE 1 EN LA MISMA POSICION EXISTE CHOQUE, SE TERMINA EL JUEGO
      if((jugador[i][j]==1)&&(naves[i+3][j]==1)){
        Serial.println("GAME OVER");
        juegoEmpezado = 3;
        for(int k=0; k<16; k++){
          for(int m=0; m<8; m++){
            //BORRAMOS LAS NABES, BALAS Y JUGADOR
            jugador[k][m]=0;
            balas[k][m]=0;
            naves[k+3][m]=0;
          }          
        }
        tiempoGameOver=millis();//INICIAMOS CONTADOR PARA MOSTRAR RESULTADO
      }
    }
  }
}

//----DISPAROS ACERTADOS----
void comprobarDisparos(){
  for (int i=0; i<16; i++){
    for(int j=0; j<8; j++){
      //SI EL DISPARO COINCIDE CON LA COORDENADA DE UNA NABE SE SUMA 1 PUNTO
      if((balas[i][j]==1)&&(naves[i+3][j]==1)){
        punteo++;
        Serial.print("Punteo: ");
        Serial.println(punteo);
        //ELIMINAMOS LA BALA
        balas[i][j]=0;
        //ELIMINAMOS LA FILA DE NABES EN LA QUE HUBO DISPARO Y +-2 FILAS
        for(int k=0; k<8; k++){
          naves[i+3][k]=0;
          naves[i+2][k]=0;
          naves[i+1][k]=0;
          naves[i+4][k]=0;
          naves[i+5][k]=0;
        }
      }
    }    
  }
}

//----PINTAR MATRIZ 1 DE JUEGO----
void pintarCampoJuego1(){
  for (int i=0; i<8; i++){
    //habilitamos fila con HIGH
    digitalWrite(i+31, HIGH);
    for(int j=0; j<8; j++){
      if ((jugador[i][j] == 1)||(balas[i][j] == 1)||(naves[i+3][j] == 1)){
        //encendemos led con LOW
        digitalWrite(j+41, LOW);
      }
    }
    delay(1);//después de pintar una fila completa esperamos un milisegundo
    digitalWrite(i+31, LOW);//desabilitamos fila con LOW
    for(int j=41; j<49; j++){
      digitalWrite(j, HIGH);//apagamos columnas con HIGH
    }    
  }
  //Luego de pintar primera Matriz llamamos a pintar Segunda ya que el método es diferente
  pintarCampoJuego2();  
}

//----PINTAR MATRIZ 2 DE JUEGO----
void pintarCampoJuego2(){
  //Se maneja columna fila por el recorrido de la matriz física
  //como la matriz está volteada si se están recorriendo por filas visualmente
  for (int columna = 0; columna <8; columna++){
    for(int fila = 0; fila <8; fila++){
      if((jugador[columna+8][fila] == 1)||(balas[columna+8][fila] == 1)||(naves[columna+11][fila] == 1)){
        lc.setLed(0,fila,columna,true);
      }
    }
    delay(1);//despues de pintar la "fila visual" esperamos 1 milisegundo
    //la matriz2 se borra completa al cambiar la variable tiempo con el potenciometro
  }
}

//----PINTAR MATRIZ 1 DE NUMEROS----
void pintarNumeroMatriz1(int f){
  for (int i=0; i<8; i++){
    //habilitamos fila con HIGH
    digitalWrite(i+31, HIGH);
    for(int j=0; j<8; j++){
      switch(f){
        case 0:
          if (cero[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 1:
          if (uno[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 2:
          if (dos[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 3:
          if (tres[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 4:
          if (cuatro[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 5:
          if (cinco[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 6:
          if (seis[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 7:
          if (siete[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 8:
          if (ocho[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        case 9:
          if (nueve[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
        default:
          if (question[i][j] == 1){
            //encendemos led con LOW
            digitalWrite(j+41, LOW);
          }
          break;
      }

    }
    delay(1);//después de pintar una fila completa esperamos un milisegundo
    digitalWrite(i+31, LOW);//desabilitamos fila con LOW
    for(int j=41; j<49; j++){
      digitalWrite(j, HIGH);//apagamos columnas con HIGH
    }    
  }
}

//----PINTAR MATRIZ 2 DE NUMEROS----
void pintarNumeroMatriz2(int f){
  //Se maneja columna fila por el recorrido de la matriz física
  //como la matriz está volteada si se están recorriendo por filas visualmente
  for (int columna = 0; columna <8; columna++){
    for(int fila = 0; fila <8; fila++){
      switch(f){
        case 0:
          if(cero[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 1:
          if(uno[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 2:
          if(dos[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 3:
          if(tres[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 4:
          if(cuatro[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 5:
          if(cinco[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 6:
          if(seis[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 7:
          if(siete[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 8:
          if(ocho[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        case 9:
          if(nueve[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
        default:
          if(question[columna][fila] == 1){
            lc.setLed(0,fila,columna,true);
          }
          break;
      }
    }
    delay(1);//despues de pintar la "fila visual" esperamos 1 milisegundo
    //la matriz2 se borra completa al cambiar la variable tiempo con el potenciometro
  }
}

//----PINTAR PUNTEO----
//analiza el punteo, separa unidades y descenas para enviarlas al metodo de pintado correspondiente
void pintarPunteo(){
  lc.clearDisplay(0);
  int decena = punteo/10;
  int unidad = punteo - (decena*10);
  if(decena>10){//si es mayor a 100 se arroja simbolo de interrogación
    pintarNumeroMatriz2(10);
    pintarNumeroMatriz1(10);
  }else{
    pintarNumeroMatriz2(unidad);
    pintarNumeroMatriz1(decena);
  }  
}


//----MAIN----
void loop() {
  //MOSTRANDO MENSAJE
  if(juegoEmpezado == 0){
    pintarNombres(analogRead(pot));
    esperarStar();

  //JUGANDO
  }else if(juegoEmpezado == 1){
    esperarStar();
    juego2();
    
  //GAME OVER
  }else if(juegoEmpezado == 3){
    if(millis()-tiempoGameOver>5000){
      digitalWrite(27,LOW);
    }else{
      pintarPunteo();   
    }

  //JUEGO EN PAUSA
  }else if(juegoEmpezado == 2){
    pintarPunteo();
    esperarStar();
  }
}

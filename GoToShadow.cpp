int nextF;

void nextFlare(float ourPos[3]){

    game.getNextFlare(nextF);
    if (nextF == 30){
        DEBUG (("Next flare will come in 30 seconds"))
     else if(nextF == 15 || not areWeinsideShadow(ourPos)){
         
         if (ourPos[0] > 0 && ourPos[0] < (asteroidRadius + sphereRadius + 0.1f)) {
            	centerPos[0] = asteroidRadius + sphereRadius + 0.1f;
          } else if (ourPos[0] > asteroidRadius + sphereRadius + 0.1f) {
            	centerPos[0] = ourPos[0];
          }
         api.setPositionTarget(centerPos);
         
     else if(nextF == 15 || areWeinsideShadow(ourPos)){
         // aqui va cuando ya estamos en sombra (subir fotos, etc, todo lo que se os ocurra durante esos 3 secs)
         api.setPositionTarget(ourPos) 
         game.uploadPic() // 3 segundos sin cámara
     }
     }
    }
}


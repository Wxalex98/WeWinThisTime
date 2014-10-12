float ourPack[3];
float ourState[12];
float ourPos[3];
float attTarget[3];
float randomPlace[3];
float zero[3];
float asteroidRadius;
float sphereRadius;
float preventionRadius;
int counter;
int nextFlare;
bool weHaveMemory;
bool insideShadow;


void init(){
    zero[0] = 0.0f;
    zero[1] = 0.0f;
    zero[2] = 0.0f;
	api.getMyZRState(ourState);
    if (ourState[1]>0.0f){
	    ourPack[0] = -0.5f;
	    ourPack[1] = 0.6f;
	    ourPack[2] = 0.0f;
    }
    if (ourState[1]<0.0f){
    	ourPack[0] = -0.5f;
    	ourPack[1] = -0.6f;
    	ourPack[2] = 0.0f;
    }
    attTarget[0] = 0.0f;
    attTarget[1] = 0.0f;
    attTarget[2] = 80*PI/180;
    
    weHaveMemory = false;
    
    randomPlace[0] = -0.5f;
    randomPlace[1] = 0.0f;
    randomPlace[2] = 0.0f;
    
    asteroidRadius = 0.22f;
    sphereRadius = 0.11f;
    preventionRadius = asteroidRadius + sphereRadius + 0.05f;
    centerPos[1] = 0.0f;
    centerPos[2] = 0.0f;
    insideShadow = false;
}

void loop(){
	api.getMyZRState(ourState); //Update our state
	game.getNextFlare(nextFlare);
	
    	// Store the current position of the sphere in ourPos
	for (int i=0;i<3;i++){
		ourPos[i] = ourState[i];
	}
	if (nextFlare < 15 and  (not areWeinsideShadow(ourPos))) {
		goToShadow(ourPos);
	} else if (nextFlare < 15) {
		api.setPositionTarget(ourPos);
        	game.uploadPic(); // 3 segundos sin cámara
	} else if ((game.hasMemoryPack(0,0))||(weHaveMemory)) {
		// take pictures function (?)
		api.setAttRateTarget(zero);
		api.setPositionTarget(randomPlace);
	} else {
		// Call function to go for the pack
        	weHaveMemory = goForPack(ourPack,ourState,ourPos,attTarget);
    	}
}

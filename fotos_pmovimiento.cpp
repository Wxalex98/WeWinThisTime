float pos[3];
float zero[3];
float target[3];
float myState[12];
float myPos[3];
float parcial[3];
float dist;

void getPos(float myPos[3]) {
    api.getMyZRState(myState);
	for (int i=0; i<3; i++)
	    myPos[i] = myState[i];
}    

void init(){
	pos[0]=-0.5f;
	pos[1]=0.0f;
	pos[2]=0.0f;
	
	zero[0]=0.0f;
	zero[1]=0.0f;
	zero[2]=0.0f;
}

void loop(){
    getPos(myPos);
    mathVecSubtract(parcial, zero, myPos, 3);
    //dist = mathVecMagnitude(parcial,3);

    api.setPositionTarget(pos);
    api.setAttitudeTarget(parcial);
    
    game.getPOILoc(target, 2);
    
    if (game.alignLine(2)) {
        game.takePic(2);
        DEBUG(("TAKEN"));
    }
}

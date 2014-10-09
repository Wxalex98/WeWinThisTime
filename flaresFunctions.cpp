float ourState[12];
float ourPos[3];
float centerPos[3];
float posTarget[3];
float attTarget[3];
bool insideShadow;
float asteroidRadius;
float distance2center;
float sphereRadius;

void init(){
    asteroidRadius = 0.22f;
    sphereRadius = 0.11f;
    centerPos[1] = 0;
    centerPos[2] = 0;
}
    
//Returns true if we are in the shadow zone
void areWeinsideShadow(){
    centerPos[0] = ourPos[0];
    getDistance(distance2center,centerPos, ourPos);
    
    if (ourPos[0] > 0 && distance2center < asteroidRadius) {
        insideShadow = true;
    } else {
        insideShadow = false;
    }
}


void main(){
    
    api.getMyZRState(ourState); //Update our state
    
    // Store the current position of the sphere in ourPos
	for (int i=0;i<3;i++){
	    ourPos[i] = ourState[i];
	}
    
    if (not areWeinsideShadow){
    	// Sin optimizar, simplemente que vaya al rectángulo (mañana la matizo)
        if (ourPos[0] > 0 && ourPos[0] < (asteroidRadius + sphereRadius + 0.1f)) {
        	centerPos[0] = asteroidRadius + sphereRadius + 0.1f;
        } else if (ourPos[0] > asteroidRadius + sphereRadius + 0.1f) {
        	centerPos[0] = ourPos[0];
	}
	api.setPositionTarget(centerPos);
    }
        // to lo que queda por escribir
}
    
    
    //api.setPositionTarget(pos);


float ourState[12];
float ourPos[3];
float centerPos[3];
float posTarget[3];
float attTarget[3];
bool insideShadow;
float asteroidRadius;
float distance2center;
float tangentLine[2];
float preventionRadius;
float sphereRadius;
float vector[3];
float dist;

void init(){
    asteroidRadius = 0.22f;
    sphereRadius = 0.11f;
    preventionRadius = asteroidRadius + sphereRadius + 0.05f;
    centerPos[1] = 0.0f;
    centerPos[2] = 0.0f;
    insideShadow = false;
}


float getDistance(float pos[3],float target[3]){
    mathVecSubtract(vector,target,pos,3);
    dist = mathVecMagnitude(vector,3);
    return dist;
}

float tangentCircle(float point[3]) {
	
	
	
}

bool areWeinsideShadow(float pos[3]){
    centerPos[0] = pos[0];
    distance2center = getDistance(centerPos, pos);
    
    if (pos[0] > 0 && distance2center < asteroidRadius) {
       return true;
    } else {
        return false;
    }
}

void loop(){
    api.getMyZRState(ourState); //Update our state
    
    // Store the current position of the sphere in ourPos
	for (int i=0;i<3;i++){
	    ourPos[i] = ourState[i];
	}
    
    if (not areWeinsideShadow(ourState)){
    	
        if (ourPos[0] > 0 && ourPos[0] < preventionRadius) {
        	centerPos[0] = preventionRadius;
        } else if (ourPos[0] > preventionRadius) {
              	centerPos[0] = ourPos[0];
	}
	    api.setPositionTarget(centerPos);
    } else {
        api.setPositionTarget(ourPos);
    }
        // to lo que queda por escribir
}



	

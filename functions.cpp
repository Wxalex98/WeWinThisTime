//float function for getting the distance between two points
float vector[3];
float dist;

bool areWeinsideShadow(float pos[3]){
    float distance2center;
    centerPos[0] = pos[0];
    distance2center = getDistance(centerPos, pos);
    
    if (pos[0] > 0 && distance2center < asteroidRadius) {
       return true;
    } else {
        return false;
    }
}

float getDistance(float pos[3],float target[3]){
    mathVecSubtract(vector,target,pos,3);
    dist = mathVecMagnitude(vector,3);
    return dist;
}

//float function to get an angle between to attitudes
float getAngle(float initAtt[3],float currentAtt[3]){
		float dot = mathVecInner(initAtt,currentAtt,3);
		float angle = acosf(dot)*180/PI;
		return angle;
}

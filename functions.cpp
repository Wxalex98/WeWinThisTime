//float function for getting the distance between two points
float vector[3];
float dist;
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

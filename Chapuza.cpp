float ourPack[3];
float ourState[12];
float ourPos[3];
float vectorBetween[3];
float attTarget[3];
float zero[3];
float initAtt[3];
float ourAtt[3];
float dot;
float angle;
int counter;

void init(){
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
	
	zero[0] = 0.0f;
	zero[0] = 0.0f;
	zero[0] = 0.0f;
	
    attTarget[0] = 0.00;
    attTarget[1] = 0.00;
    attTarget[2] = 15*PI/180;
    
    counter = 0;
	
}
void loop(){
    api.getMyZRState(ourState);
	for (int i=0;i<3;i++){
	    ourPos[i] = ourState[i];
	}
	    mathVecSubtract(vectorBetween,ourPack,ourPos,3);
	    float distance = mathVecMagnitude(vectorBetween,3);
	    api.setPositionTarget(ourPack);
	    if (distance<0.05f){
	        
	        api.setPositionTarget(ourPos);
	        for (int j=0;j<3;j++){
	            ourAtt[j] = ourState[j+6];
	            if(counter==0){
	                initAtt[j]=ourState[j+6];
	            }
	        }
	        dot = mathVecInner(initAtt,ourAtt,3);
	        angle = acosf(dot)*180/PI;
	        DEBUG(("%f",angle));
	        if (angle<90){
                api.setAttRateTarget(attTarget);
            }else{
                api.setAttRateTarget(zero);
	        }
            counter++;
	    }
}
float ourAtt[3];
float initAtt[3];
//boolean function for getting the pack, returns true if got it
bool goForPack(float ourPack[3],float ourState[12],float ourPos[3],float attTarget[3]){
    float zero[3] = {0.0f,0.0f,0.0f};
	// Distance from ourPos to ourPack
	    float distance = getDistance(ourPos,ourPack);
	    api.setPositionTarget(ourPack);
	    if ((distance>0.05f)&&(distance<0.07f)){
	        for (int i=0;i<3;i++){
	            initAtt[i] = ourState[i+6];
	        }
	    }
	    if (distance<0.05f){
		    //Stop and turn
            api.setPositionTarget(ourPos);
            api.setAttRateTarget(attTarget);
            //Get turning angle
            for (int j=0;j<3;j++){
	    		 ourAtt[j] = ourState[j+6];
	    	}
	    	float angle = getAngle(initAtt,ourAtt);
	    	DEBUG(("%f",angle));
	    	if(angle>90){
	    	    api.setAttRateTarget(zero);
	    	    return true;
	    	}
	    }
	    return false;
}

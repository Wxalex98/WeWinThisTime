float ourState[12];
float ourPos[3];
float wayP[3][3];
 
void init(){
   
    // give values to all waypoints
    wayP[0][0] = ;
    wayP[0][0] = ;
    wayP[0][0] = ;
    
    wayP[0][0] = ;
    wayP[0][0] = ;
}
 

void goToShadow(float ourPos[3]) {
        if (ourPos[0] > 0 && ourPos[0] < (asteroidRadius + sphereRadius + 0.1f)) {
            	centerPos[0] = asteroidRadius + sphereRadius + 0.1f;
        } else if (ourPos[0] > asteroidRadius + sphereRadius + 0.1f) {
            	centerPos[0] = ourPos[0];
        } else { 
                // plano tangente al punto
                // un poco más (para no quedarnos parados)
        }
        
        api.setPositionTarget(centerPos);
         
}

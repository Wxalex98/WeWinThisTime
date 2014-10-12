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

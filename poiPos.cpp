//Posicion de los POI

float poiPos1[3];
float poiPos2[3];
float poiPos3[3];

void init(){
}

void loop(){
    for (int i=0;i<3;i++){
	    game.getPOILoc(poiPos1,i);
	    DEBUG(("poiPos1 = [%f %f %f] \n",poiPos1[0],poiPos1[1],poiPos1[2]));
    }
    for (int j=0;j<3;j++){
	    game.getPOILoc(poiPos2,j);
	    DEBUG(("poiPos2 = [%f %f %f] \n",poiPos2[0],poiPos2[1],poiPos2[2]));
    }
    for (int k=0;k<3;k++){
	    game.getPOILoc(poiPos3,k);
	    DEBUG(("poiPos3 = [%f %f %f] \n",poiPos3[0],poiPos3[1],poiPos3[2]));
    }
}

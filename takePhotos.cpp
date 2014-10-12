//f
float poiPos[3][3];

//Gets current POIs positions
void seePOI(poiPos){
  for(int i=0;i<2;i++){
    game.getPOILoc(pos[i], i);
  }
}

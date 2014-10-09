void isThereDanger(bool danger){
    int next = game.getNextFlare();
    if(next<10){
        danger = true;
    }
    if (next==0){
        int counter = 4;
    }
    if ((counter<=-1)&&(next==-1)){
        danger = false;
    }
    if(counter==-1){
        counter = 0;
    }
    if (counter>0){
        counter--;
    }
    DEBUG(("Countdown %i",next));
    if (!(danger)){
        DEBUG(("no danger"));
    }else{
        DEBUG(("danger!"));
    }
}

void goToShadowZone(float pos[3]){
    api.setPositionTarget(pos);
}

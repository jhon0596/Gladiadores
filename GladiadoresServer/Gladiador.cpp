//
// Created by gacova on 14/05/19.
//
#include "Utilities.h"
#include "Gladiador.h"
void Gladiador::fillSPECIAL() {
    /*special[0]=this->edad;
    special[1]=this->conFis;
    special[2]= this->fTroSup;
    special[3]=this->fTroInf;
    special[4]=this->emoji;
    special[5]=this->fitness;*/

}

Gladiador::Gladiador(std::string nm) {
    this->unTag=nm;



    std::bitset<6> edad((unsigned)Utilities::random(18,55));
    std::bitset<6> conf((unsigned)Utilities::random(1,20));
    std::bitset<6> trsup((unsigned)Utilities::random(1,20));
    std::bitset<6> trinf((unsigned)Utilities::random(1,20));
    std::bitset<6> emoji((unsigned)Utilities::random(1,20));



    std::string mystring =edad.to_string();
    mystring.append( trinf.to_string());
    mystring.append(trsup.to_string());
    mystring.append(conf.to_string());
    mystring.append( emoji.to_string());
    std::bitset<30> set18(mystring);


    this->atributos =(int)set18.to_ulong();





}
Gladiador::Gladiador(std::string nm, std::string gen) {
    this->unTag=nm;



    std::bitset<6> edad(gen,24,6,'0','1');
    std::bitset<6> conf(gen,18,6,'0','1');
    std::bitset<6> trsup(gen,12,6,'0','1');
    std::bitset<6> trinf(gen,6,6,'0','1');
    std::bitset<6> emoji(gen,0,6,'0','1');



    std::string mystring =edad.to_string();
    mystring.append( trinf.to_string());
    mystring.append(trsup.to_string());
    mystring.append(conf.to_string());
    mystring.append( emoji.to_string());
    std::bitset<30> set18(mystring);


    this->atributos =(int)set18.to_ulong();

}

std::string Gladiador::display() {

    std::bitset<30> set18(this->atributos);
    std::string sal="";
    sal.append(this->unTag+" ");
    int j=0, caract=0;
    std::bitset<6> tmp;
    for(int i=0;i<set18.size()+1;i++){

        if(j<6){
            tmp[j]=set18[i];
            j++;

        }else{
            j=0;
            //sal.append(this->txt[caract]+" ");
            //sal.append(std::to_string(tmp.to_ulong())+" ");
            atributo[caract]=tmp.to_ulong();
            tmp.reset();
            tmp[j]=set18[i];
            j++,caract++;

        }


    }


    sal.append("fitness "+std::to_string(calcFitn()));
    //std::cout << set18<< std::endl;
    return sal;







}

float Gladiador::calcFitn() {
    int atr[5];

    std::bitset<30> set18(this->atributos);


    int j=0, atrFlg=0;
    std::bitset<6> tmp;
    for(int i=0;i<set18.size()+1;i++){

        if(j<6){//pregunta si j es  mayor a 6
            tmp[j]=set18[i];
            j++;

        }else{
            j=0;

            atr[atrFlg]=(unsigned) tmp.to_ulong();
            tmp.reset();
            tmp[j]=set18[i];
            j++,atrFlg++;

        }


    }



    //(((fTroSup+fTroInf)*conFis)+emoji)/edad formula del fitness


    return std::abs((((atr[2]+atr[1])*atr[3])+atr[0])/atr[4]);

}
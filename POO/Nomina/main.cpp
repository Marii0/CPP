#include "Nomina.cpp"

int main(){
    int nominas;
    
    cout<<"Cuantas nominas desea realizar: ";
    cin>>nominas;

    Nomina Nomina1;

    while (nominas--)
    {
        Nomina1.setreloj();
        Nomina1.setnombre();
        Nomina1.settipodeempleado();
        if(Nomina1.gettipoempleado()=="Base")
        {
            Nomina1.setsueldobase();
            Nomina1.getsueldobase();
        }
        else if (Nomina1.gettipoempleado()=="Comision")
        {
            Nomina1.setventas();
            Nomina1.getsueldohoras();
        }
        else if (Nomina1.gettipoempleado()=="Horas")
        {
            Nomina1.sethoras();
            Nomina1.setcostohoras();
            Nomina1.getsueldocomision();
        }
        
    }
    
    
}
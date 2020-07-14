#include "iostream"
#include "cmath"

using namespace std;
int main()
{
    double preciototal[7];
    double totalfinal;
    char producto[7][20]={"Cleric Armor", "Mask of the Father", "Mask of the Mother","Mask of the Child", "Humanity", "Crescent Axe", "Canvas Talisman"};
    int numerodeserie [7];
    int cantidad[7];
    int serial[7];
    int i,n,m;
    int answer;

    cout<<endl<<"Welcome to Trusty Patche's Trove of Treasures"<<endl<<"  We chop prices, not limbs!"<<endl<<endl;
    //El nombre de la tienda es una referencia a un mercader en uno de mis videojuegos favoritos: Dark Souls
    //El mercader en cuestión se llama "Trusty Patches", y es un rufían que obtiene su mercancía de los cuerpos de viajeros muertos en las catacumbas y luego te los vende a precios altos
    //Por lo tanto las cosas que vende también son referencias al juego

    cout<<"Stuff on sale: "<<endl<<endl;
    cout<<"Item                                price"<<endl;
    //Ire describiendo aquí más o menos a que hace referencia cada cosa
    cout<<"1. Cleric Armor.........................1500.00"<<endl; //Con respecto al precio, en el juego las cosas se pagan con "almas" que son la principal moneda del territorio donde se desarrolla el juego
    //Armadura de los clerigos que se encaminan en peregrinajes a las catacumbas, el que las use aparentará ser más grande de lo que realmente es

    cout<<"2. Mask of the Father...................68.69"<<endl;
    //Una de las máscaras del nigromante de las catacumbas, al ponérsela uno recibe un aumento de fuerza y es capaz de llevar más peso a la vez

    cout<<"3. Mask of the Mother...................66.88"<<endl;
    //Otra de las máscaras del nigromante de las catacumbas, al ponersela la vitalidad de uno aumenta

    cout<<"4. Mask of the Child....................65.66"<<endl;
    //Otra de las máscaras del nigromante de las catacumbas, al ponersela la resistencia física de uno aumenta

    cout<<"5. Humanity.............................25.14"<<endl;
    //Fragmento de un espíritu oscuro que habita dentro de los seres humanos, juega un rol muy importante en el juego

    cout<<"6. Crescent Axe.........................88.12"<<endl;
    //Hacha que utilizan los clérigos que peregrinan a las catacumbas

    cout<<"7. Canvas Talisman......................28.88"<<endl;
    //Talísman que utilizan los clérigos para realizar milagros, la mágia de una de las tres escuelas de mágia en el juego

    cout<<endl<<endl;

    cout<<"What items would you like?: "<<endl;

    n=0;

    //En esta versión del programa tuve que utilizar números para representar cada uno de los productos porque a la hora de utilizar la expresión "switch" este no agarraba valores de más de un carácter

    for(i=1;i<=7;i++)
    {
        cout<<"Write down item number: ";
        cin>>serial[i];
        cout<<"Item name: "<<producto[serial[i]-1]<<endl;
        cout<<"Quantity: ";
        cin>>cantidad[i];
        cout<<"Anything else? (yes=1/no=0)"<<endl;
        cin>>answer;
        n=n+1;
    
        if(answer == 0)
        {
            break;
        }
    }

    cout<<"Total Price"<<endl<<endl;
    cout<<"Item(quantitiy)                            price"<<endl;

    //Este procedimiento que utilizé es más línear y básico, pero a diferencia de la primera versíon que hice, funciona
    
    for(m=1;m<=n;m++)
    {
         switch(serial[m])
            {
                case 1: 
                    preciototal[m]= 1500.00*cantidad[m]; 
                    cout<<"Cleric Armor("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 2: 
                    preciototal[m]= 68.69*cantidad[m];
                    cout<<"The Mask of the Father ("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 3: 
                    preciototal[m]= 66.88*cantidad[m]; 
                    cout<<"The Mask of the Mother("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 4: 
                    preciototal[m]= 65.66*cantidad[m];
                    cout<<"The Mask of the Child("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 5: 
                    preciototal[m]= 25.14*cantidad[m];
                    cout<<"Humanity ("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 6: 
                    preciototal[m]= 88.12*cantidad[m];
                    cout<<"Crescent Axe ("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;
                case 7: 
                    preciototal[m]= 28.88*cantidad[m];
                    cout<<"Canvas Talisman("<<cantidad[m]<<")................"<<preciototal[m]<<endl;
                    break;                    
                default: preciototal[m]=0;
        }
    }
    totalfinal=0;

    for(m=1;m<=n;m++)
        {
            totalfinal = preciototal[m] + totalfinal;
    }

    cout<<"         Subtotal.........."<<totalfinal<<endl;
    
    if(totalfinal != 0)
        {cout<<"Thank you for buying at Trusty Patches Trove of Treasure, we expect you back soon!"<<endl;
        //Esta es la despedida que el dueño hace una vez que las compras han sido hechas
        }
    else
    {
        cout<<"What a waste of tieme! Bugger off then!"<<endl;
    //En caso de que no se compre nada, el dueño de la tienda se mostrará molesto
    }
    cout<<endl; 
    return 0;
}
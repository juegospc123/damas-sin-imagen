
#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<vector<int>> tablero_modificado_pieza={
		{0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0} }; 


vector <int> Puestos_validos_por_dama_comun(int dato1,int dato2, int dato3,int dato4)
{

	vector<int> comprovacoin_proceso;
	comprovacoin_proceso.push_back(dato1);
	comprovacoin_proceso.push_back(dato2);
	comprovacoin_proceso.push_back(dato3);
	comprovacoin_proceso.push_back(dato4);

	

	
	//atraz, derecha e isquierda de "O"

	//derecha
	vector<int>tempo= comprovacoin_proceso;

	if (tablero_modificado_pieza[dato1][dato2]==1 )
	{//JUGADOR "O"
		//atraz, derecha e isquierda de "O"
		int i=0,j=0;
		if(dato1 < dato3)
		{
			if ( dato1+1 == dato3 && dato2+1 == dato4)
			{
				while()
				{

					while(tablero_modificado_pieza[comprovacoin_proceso[2]+1][comprovacoin_proceso[3]+1] == 0)
					{


					j++;
					}
				i++;
				}

			}
		}
	}
	

	
int tem1= tablero_modificado_pieza[dato1][dato2];
				int tem2= tablero_modificado_pieza[dato3][dato4];

		return tablero_modificado_pieza[][];

}

vector<vector<int>> Verificacion_de_movimiento_obligatirios( vector<vector<int>> matriz_verificada /*int letra_pieza1, int numero_pieza1,int letra_ataque,int num_ataque*/){
	int movidas_temporar1.movidas_temporar2,movidas_temporar3;
	vector<vector<int>> matriznumerica = {
        {0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0} };
	
	
return  ;
}

void NUMERO_FUERA_DE_LOS_PARAMETROS_ESTABLECIDOS()
{
	cout<<"\t NUMERO FUERA DE LOS PARAMETROS ESTABLECIDOS\n Intente de vulta";
}

void LETRA_FUERA_DE_LOS_PARAMETROS()
{
	cout<<"\t LETRA FUERA DE LOS PARAMETROS ESTABLECIDOS\n Intente de vulta";
} 


void vefificacion_de_piza()
{

		//vector<vector<int>> pociciones_nulas;
	
	char letra;
	int num,comvrcion=0;
	int ancho=0,comvrcion1=0;
	char alto;


	char opcion_letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I','J'};
	 	cout<<"\n Ingrese pocion de SU pieza:\n";
		cout<<"Letra";
		cin >> letra;

		if(letra <'A' && letra>'H')
			{ ;cin >> letra;}
		cout<<"Numero:";
		cin >> num;
		if (num<0 || num >=10 )
			{NUMERO_FUERA_DE_LOS_PARAMETROS_ESTABLECIDOS(); cin >> num;}
		
		for(int r=0;r<=10;r++){
			if (letra == opcion_letras[r]){comvrcion=r;}}

			
	cout<<"Solicitamos la cordenada de la pieza a exterminar:\n";
	cout<<"\tLetra";
		cin >> alto;
		if(alto <'A' && alto>'H')
		{LETRA_FUERA_DE_LOS_PARAMETROS();cin >> alto;}
	cout<<"\tNumero:";
		cin >>ancho;

	if (ancho<0 || ancho >=10 )
		{NUMERO_FUERA_DE_LOS_PARAMETROS_ESTABLECIDOS();cin >> ancho;}
	

	for(int o=0;o<=10;o++)
	{if (alto == opcion_letras[o]){comvrcion1=o;}}
		
	Puestos_validos_por_dama_comun(comvrcion,num,comvrcion1,ancho);
}

getline(cin,al);

int main()
{
	vector<vector<int>> tablero = {
        {0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0,1,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0},
        {0,2,0,2,0,2,0,2,0,2},
        {2,0,2,0,1,0,2,0,2,0} };
    
	  char tablero[10][10] = {
        {' ', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
        {'X', ' ', 'X', ' ', 'X', ' ', 'X', ' '},
        {' ', 'X', ' ', 'X', ' ', 'X', ' ', 'X'},
        {'X', ' ', 'X', ' ', 'X', ' ', 'X', ' '},
        {' ', 'O', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', '.', ' ', ' ', ' ', ' ', ' '},
        {' ', 'O', ' ', 'O', ' ', 'O', ' ', 'O'},
        {'O', ' ', 'O', ' ', 'O', ' ', 'O', ' '},
        {' ', 'O', ' ', 'O', ' ', 'O', ' ', 'O'},
        {'O', ' ', 'O', ' ', 'O', ' ', 'O', ' '}
    };
   
	cout<<endl<<endl;
	    std::cout << "\t    0   1   2   3   4   5   6   7" << std::endl;
		std::cout << "\t  |---|---|---|---|---|---|---|---|" << std::endl;
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 8; ++i) {
        std::cout << "\t" << letras[i] << " | ";
        for (int j = 0; j < 8; ++j) {
            std::cout << tablero[i][j] << " | ";
        }
        std::cout << std::endl;
        std::cout << "\t  |---|---|---|---|---|---|---|---|" << std::endl;
    }
		vefificacion_de_piza();
	return 0;
}



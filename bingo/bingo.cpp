#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <time.h>

using namespace std;
void pause(){
	cout<< "Pulsa enter para continuar....";
	getwchar();
	getwchar();
}

//_________________________________________________________ESTRUCTURA
struct algo{
	  int valor;
	  bool estado;
};

algo crear(int i){
	  algo al;
	  al.valor;
	  al.estado;
	return al;
};

//___________________________________________________________EL MURO
void muro(){
	system ("color 74");
	cout<<endl<<endl;
	cout<<"\t\t\t	°°°°°    °   °°    °    °°°     °°° "<<endl;
	cout<<"\t\t\t	°    °   °   ° °   °   °       °   °"<<endl;
	cout<<"\t\t\t	°°°°°    °   °  °  °   °°°°    °   °"<<endl;
	cout<<"\t\t\t	°    °   °   °   ° °   °   °   °   °"<<endl;
	cout<<"\t\t\t	°°°°°    °   °    °°    °°°     °°° "<<endl<<endl;
}

//_________________________________________________________NUMERO RANDON
int numRan(int n){
	if(n==1)
	 	return rand() % 15 + 1;
	if(n==2)
	 	return rand() % 15 + 16;
	if(n==3)
	 	return rand() % 15 + 31;
	if(n==4)
	 	return rand() % 15 + 46;
	if(n==5)
	 	return rand() % 15 + 61;
	if(n==6)
	 	return rand() % 75 + 1; 
}

//_____________________________________________________MATRIZ CARTON PRINCIPAL
void matriz_Imprimir(algo matriz[5][15]){			
		system ("color 60");//color fondo y fuente
	  	cout<<endl<<endl<<"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;	
  		cout<<"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° B I N G O °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
				
				for(int i=0; i<5; i++){
					if(i==0){
							cout<<"\t\t°°° B ";
						}else if(i==1){
							cout<<"\t\t°°° I ";
						}else if(i==2){
							cout<<"\t\t°°° N ";
						}else if(i==3){
							cout<<"\t\t°°° G ";
						}else if(i==4){
							cout<<"\t\t°°° O ";
						}
			
					for(int z=0; z<15; z++){
						if(matriz[i][z].valor < 10)
							cout << "0";
						    cout << matriz[i][z].valor << " ";
							    if(matriz[i][z].estado == true)
							    	cout << "X  ";
							    	else
										cout<< "   ";
					} 
						cout<<"°°°";
						cout << endl;
				}
			cout<<"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
			cout<<""<<endl;  
}

//________________________________________________________IMPRIMIR CARTON
void crearCarton(algo matrizCarton[5][5]){
		   for(int h=0; h<1;h++){
			   	cout<<""<<endl;
			    cout<<"\tB      I     N     G    O"<<endl;
				      	for(int i=0;i<5;i++ ){
				      		cout<<"\t";
					        for(int j=0;j<5;j++ ){
					          if(matrizCarton[i][j].valor< 10)
					          	cout << "0";
					            cout << matrizCarton[i][j].valor << " ";
									if(matrizCarton[i][j].estado == true)
					                		cout << "X  ";
					              		else
					             			cout<< "   ";
					        }
					      cout<<endl;
				    	}
			}
}

//____________________________________________________VERIFICAR CARTON GANADOR
bool ganadorCompleto(algo matrizCarton[5][5]){
		int cont=0, jugar;
		  	for(int i=0; i<5; i++){
				for(int k=0; k<5; k++){
			        if (matrizCarton[i][k].estado==true){
			            cont=cont+1;
			         		if(cont==25){
					              system("cls");
					              cout<<endl<<endl;
					              muro();
					              cout<<endl<<endl<<"\t\t\t\t\tGANASTE CARTON COMPLETO"<<endl;
					              pause();
		           			return true;
		        			}
					}
				}
			}
  return false;  
}

//______________________________________________________VERIFICAR GANADOR EN X
bool ganadorConX(algo matrizCarton[5][5]){
		if (matrizCarton[0][0].estado==true&& matrizCarton[1][1].estado==true&& matrizCarton[2][2].estado==true&& matrizCarton[3][3].estado==true&& matrizCarton[4][4].estado==true&& matrizCarton[4][0].estado==true&& matrizCarton[3][1].estado==true&&matrizCarton[1][3].estado==true&& matrizCarton[0][4].estado==true){
            system("cls");
            cout<<endl<<endl;
            muro();
            cout<<endl<<endl<<"\t\t\t\t\tGANASTE BINGO EN X"<<endl;
            pause();
       	return true;		
		}
	return false;
}
    
//___________________________________________________VERIFICAR GANADOR EN L 
bool ganadorConL(algo matrizCarton[5][5]){
        if (matrizCarton[0][0].estado==true&& matrizCarton[1][0].estado==true&& matrizCarton[2][0].estado==true&& matrizCarton[3][0].estado==true&& matrizCarton[4][0].estado==true&& matrizCarton[4][1].estado==true&& matrizCarton[4][2].estado==true&&matrizCarton[4][3].estado==true&& matrizCarton[4][4].estado==true){
              system("cls");
              cout<<endl<<endl;
              muro();
              cout<<endl<<endl<<"\t\t\t\t\tGANASTE BINGO EN L"<<endl;
              pause();
        return true;  
		}
    return false;  
}

//__________________________________________________________VERIFICAR TABLERO PRINCIPAL
bool verificar(algo matriz[5][15],int balota){
		for(int i=0; i<5; i++){
			for(int k=0; k<15; k++){
        		if (matriz[i][k].valor==balota && matriz[i][k].estado==true){
            		return true;
			  	}
			}
		}
    return false;
}

//______________________________________________________________VERIFICAR CARTON
bool verificarCarton(algo matrizCarton[5][5],int balota){
		for(int i=0; i<5; i++){
			for(int k=0; k<5; k++){
		        if (matrizCarton[i][k].valor==balota && matrizCarton[i][k].estado==true){
		        return true;
			  	}
			}
		}
	return false;
}

//____________________________________________________________FUNCION PRINCIPAL
int main(){
		algo arreglo[75];
		int balota;
		
//___________________________________________________________CREO ARREGLO PRINCIPAL	
			    for (int i =0; i<75; i++){
			      	arreglo [i]=crear(i);
				}
				
//_________________________________________________________________EL MURO
		muro();
							
//___________________________________________________SE SOLICITA LA CANTIDAD TABLAS A JUGAR 
		int cartones;
		algo matrizCarton[5][5];
			cout<<"\n"<<"Digite el numero de cartones que desea ";
			cin >>cartones;
			cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl<<endl;
		int cartones_array[cartones][25];
				
//_______________________________________________________ELIJA LA OPCION DE JUEGO 
			cout<<"Escoja el tipo de bingo que quieras jugar"<<endl<<endl;
			cout<<"1.  Bingo un carton completo "<<endl;
			cout<<"2.  Bingo en L"<<endl;
			cout<<"3.  Bingo en X"<<endl;
		
		int op;
		cin>>op;

//______________________________________________________________CASOS DE JUEGO
	switch (op){
		case 1:{				
      	int var=1, jugar;
      	
//___________________________________________________________CREA MATRIZ TABLERO      	
			algo matriz[5][15];
					for(int i=0; i<5; i++){
						for(int k=0; k<15; k++){
							matriz[i][k].valor=var;
							matriz[i][k].estado=false;
							var++;
						}
					}
												
			algo matrizCarton[5][5];
			int numbers[5*5] = { 0 };
			bool ok;
			int n, max_num=75, z=0, x;
				   for(int i=0;i<5;i++ ){
					    for(int j=0;j<5;j++ ){
						    do{
					        	ok = true;
							        if(j==0)
							          n = numRan(1);
							        if(j==1)
							          n = numRan(2);
							        if(j==2)
							          n = numRan(3);
							        if(j==3)
							          n = numRan(4);
							        if(j==4)
							          n = numRan(5);
							        if(i==2&&j==2)
							          n = 0;
					
									    for ( x = 0; x < z; x++){
									        if (n == numbers[x]){
									            ok = false;
									        }
									    }
					        } while (!ok);
					        numbers[z] = n;
					        matrizCarton[i][j].valor= n;
					        matrizCarton[i][j].estado=false;
					        z++;
			    		}
					}			
			system ("color 60");//color fondo y fuente	
			matriz_Imprimir(matriz);
			cout<<"Quieres seguir jugando marca 1"<<endl;
		    cin>> jugar;
		    cout<<endl;
		    
		      	do {
		  			do{	system("cls");
				    	cout<<endl<<"                      °°°°°°   "<<endl;
					 	balota=numRan(6);
					    cout<<" Balota electronica   ° "<<balota<<" °"<<endl;
					    cout<<"                      °°°°°°   "<<endl;	
		            }while(verificar(matriz,balota));
					    for(int i=0; i<5; i++){
		                    for(int k=0; k<15; k++){
			                    if (matriz[i][k].valor==balota){
			                     	 matriz[i][k].estado=true;	
			                   	}
		               		}
					    }
						
						for(int i=0; i<5; i++){
		                    for(int k=0; k<5; k++){
		                        if (matrizCarton[i][k].valor==balota){
		                     	        matrizCarton[i][k].estado=true;	
		                   		}
		                   			if(i==2&&k==2)
						          		matrizCarton[i][k].estado=true;
		               		}
					    }        			
									    matriz_Imprimir(matriz);
						        		crearCarton(matrizCarton);
							            cout<<"\n"<<"Quieres seguir jugando marca 1"<<endl;
							            cin>> jugar;      
					}while(ganadorCompleto(matrizCarton)==false);                
			pause();	
			break;
		}
//_________________________________________________________CASO 2
		case 2:{
		int var=1, jugar;
		
//_____________________________________________________CREA MATRIZ TABLERO      	
			algo matriz[5][15];
					for(int i=0; i<5; i++){
						for(int k=0; k<15; k++){
							matriz[i][k].valor=var;
							matriz[i][k].estado=false;
							var++;
						}
					}
												
			algo matrizCarton[5][5];
			int numbers[5*5] = { 0 };
			bool ok;
			int n, max_num=75, z=0, x;
				   for(int i=0;i<5;i++ ){
					    for(int j=0;j<5;j++ ){
						    do{
					        	ok = true;
							        if(j==0)
							          n = numRan(1);
							        if(j==1)
							          n = numRan(2);
							        if(j==2)
							          n = numRan(3);
							        if(j==3)
							          n = numRan(4);
							        if(j==4)
							          n = numRan(5);
							        if(i==2&&j==2)
							          n = 0;
					
									    for ( x = 0; x < z; x++){
									        if (n == numbers[x]){
									            ok = false;
									        }
									    }
					        } while (!ok);
					        numbers[z] = n;
					        matrizCarton[i][j].valor= n;
					        matrizCarton[i][j].estado=false;
					        z++;
			    		}
					}			
			system ("color 60");//color fondo y fuente	
			matriz_Imprimir(matriz);
			cout<<"Quieres seguir jugando marca 1"<<endl;
		    cin>> jugar;
		    cout<<endl;
		    
		      	do {
		  			do{	system("cls");
				    	cout<<endl<<"                      °°°°°°   "<<endl;
					 	balota=numRan(6);
					    cout<<" Balota electronica   ° "<<balota<<" °"<<endl;
					    cout<<"                      °°°°°°   "<<endl;	
		            }while(verificar(matriz,balota));
					    for(int i=0; i<5; i++){
		                    for(int k=0; k<15; k++){
			                    if (matriz[i][k].valor==balota){
			                     	 matriz[i][k].estado=true;	
			                   	}
		               		}
					    }
						
						for(int i=0; i<5; i++){
		                    for(int k=0; k<5; k++){
		                        if (matrizCarton[i][k].valor==balota){
		                     	        matrizCarton[i][k].estado=true;	
		                   		}
		                   			if(i==2&&k==2)
						          		matrizCarton[i][k].estado=true;
		               		}
					    }        			
									    matriz_Imprimir(matriz);
						        		crearCarton(matrizCarton);
							            cout<<"\n"<<"Quieres seguir jugando marca 1"<<endl;
							            cin>> jugar;					  
				    }while(ganadorConL(matrizCarton)==false);                	
			pause();	
			break;
			}
			
//_______________________________________________________CASO 3			
		case 3:{				
      	int var=1, jugar;
      	
//____________________________________________________CREA MATRIZ TABLERO      	
			algo matriz[5][15];
					for(int i=0; i<5; i++){
						for(int k=0; k<15; k++){
							matriz[i][k].valor=var;
							matriz[i][k].estado=false;
							var++;
						}
					}
												
			algo matrizCarton[5][5];
			int numbers[5*5] = { 0 };
			bool ok;
			int n, max_num=75, z=0, x;
				   for(int i=0;i<5;i++ ){
					    for(int j=0;j<5;j++ ){
						    do{
					        	ok = true;
							        if(j==0)
							          n = numRan(1);
							        if(j==1)
							          n = numRan(2);
							        if(j==2)
							          n = numRan(3);
							        if(j==3)
							          n = numRan(4);
							        if(j==4)
							          n = numRan(5);
							        if(i==2&&j==2)
							          n = 0;
					
									    for ( x = 0; x < z; x++){
									        if (n == numbers[x]){
									            ok = false;
									        }
									    }
					        } while (!ok);
					        numbers[z] = n;
					        matrizCarton[i][j].valor= n;
					        matrizCarton[i][j].estado=false;
					        z++;
			    		}
					}			
			system ("color 60");//color fondo y fuente	
			matriz_Imprimir(matriz);
			cout<<"Quieres seguir jugando marca 1"<<endl;
		    cin>> jugar;
		    cout<<endl;
		    
		      	do {
		  			do{	system("cls");
				    	cout<<endl<<"                      °°°°°°   "<<endl;
					 	balota=numRan(6);
					    cout<<" Balota electronica   ° "<<balota<<" °"<<endl;
					    cout<<"                      °°°°°°   "<<endl;	
		            }while(verificar(matriz,balota));
					    for(int i=0; i<5; i++){
		                    for(int k=0; k<15; k++){
			                    if (matriz[i][k].valor==balota){
			                     	 matriz[i][k].estado=true;	
			                   	}
		               		}
					    }
						
						for(int i=0; i<5; i++){
		                    for(int k=0; k<5; k++){
		                        if (matrizCarton[i][k].valor==balota){
		                     	        matrizCarton[i][k].estado=true;	
		                   		}
		                   			if(i==2&&k==2)
						          		matrizCarton[i][k].estado=true;
		               		}
					    }        			
									    matriz_Imprimir(matriz);
						        		crearCarton(matrizCarton);
							            cout<<"\n"<<"Quieres seguir jugando marca 1"<<endl;
							            cin>> jugar;					  
				    }while(ganadorConX(matrizCarton)==false);                	
			pause();	
			break;
		}
		default:{
			cout<< "La opcion no es validad"<<endl;
		}
    }
	return 0;
}


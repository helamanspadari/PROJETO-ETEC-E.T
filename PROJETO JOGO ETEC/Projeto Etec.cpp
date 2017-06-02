#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	
	int mFloresta[10][10]; //matriz para floresta
	int i,j,nivel; //var para repetiçoes
	int idioma,arvore=0,tiro=5,tiroArvore,dif; //var para utilidades
	int nRandomico,nStatico; //var para randomico (local alien)
	
	
	srand(time(0));
	nRandomico=rand()%100;
	nStatico=nRandomico;
	//menu idioma
	cout<<"\n\n                            Selecione o idioma";
	cout<<"\n\n	    	              <1> Portugues";
	cout<<"\n			       <2> Ingles";
	cout<<"\n\n                	    Idioma Escolhido";
	cout<<"\n			  	  >>>";cin>>idioma;
	
	system("cls");

	if(idioma==1){
		//menu nivel
		cout<<"\n\n                            Bem Vindo ao jogo\n\n";
		cout<<"             Para iniciar a jogar, selecione um dos niveis\n\n";
		cout<<"                            <1> Facil";
		cout<<"\n                            <2> Medio";
		cout<<"\n                            <3> Dificil";
		cout<<"\n\n                         Nivel Selecionado";
		cout<<"\n                             >>> "; cin>>nivel;
		cout<<endl;
		system("cls");
		cout<<"\n\n                            BEM VINDO A FLORESTA"<<endl<<endl<<endl;
		cout<<"\n Situacao:"<<endl<<endl;
		cout<<"   Voce e um lenhador, um dia voce estava passeando pela floresta de 100 arvores";
		cout<<"e de repente ele avistou uma luz estranha no ceu, se aproximou da luz e percebeu";
		cout<<"que desceu algo da luz, um marciano se escondeu atras de uma das 100 arvores, assus";
		cout<<"tado, sacou sua espingarda que tem apenas 5 tiros";
		cout<<"\n   Agora voce esta na floresta e esta tentando acertar o marciano."<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		
		cout<<"\n\n                                    FLORESTA"<<endl<<endl;
		if(nivel==1){
			tiro+=5;
				while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
			cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n\nTIROS RESTANTES: " << tiro+10 << endl;
					cout<<"PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
		}
		cout << endl << endl;
		}else if(nivel==2){
			while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
					cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n				TIROS RESTANTES: " << tiro+10 << endl;
					cout << "\n			PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
		}
		cout << endl << endl;
		}else if(nivel==3){
			tiro=tiro-2;
				while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
			cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n				TIROS RESTANTES: " << tiro+10 << endl;
					cout << "\n			PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
			}
		}else{
			cout<<"\n\n				Nivel nao existente\n\n";
		}
	}else if(idioma==2){
		//menu nivel
		cout<<"                            Welcome to the Game\n\n";
		cout<<"             Para iniciar a jogar, selecione um dos niveis\n\n";
		cout<<"                            <1> Facil";
		cout<<"\n                            <2> Medio";
		cout<<"\n                            <3> Dificil";
		cout<<"\n\n                         Nivel Selecionado";
		cout<<"\n                             >>> "; cin>>nivel;
		cout<<endl;
		system("cls");
		
		cout<<"\n                            WELCOME TO THE JUNGLE"<<endl<<endl<<endl;
		cout<<"\n Situacao:"<<endl<<endl;
		cout<<"   Voce e um lenhador, um dia voce estava passeando pela floresta de 100 arvores";
		cout<<"e de repente ele avistou uma luz estranha no ceu, se aproximou da luz e percebeu";
		cout<<"que desceu algo da luz, um marciano se escondeu atras de uma das 100 arvores, assus";
		cout<<"tado, sacou sua espingarda que tem apenas 5 tiros";
		cout<<"\n   Agora voce esta na floresta e esta tentando acertar o marciano."<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		
		cout<<"\n\n                                    FLOREST"<<endl<<endl;
		if(nivel==1){
			tiro+=5;
				while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
			cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n				TIROS RESTANTES: " << tiro+10 << endl;
					cout << "\n			PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
		}
		cout << endl << endl;
		}else if(nivel==2){
			while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
					cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n				TIROS RESTANTES: " << tiro+10 << endl;
					cout << "\n			PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
		}
		}else if(nivel==3){
			tiro=tiro-2;
				while(tiro>0){
					cout<<"\n	TIROS: "<<tiro;
					cout<<endl<<endl;
					for(i=0;i<=9;i++){
						for(j=0;j<=9;j++){
							mFloresta[i][j]=arvore++;
							cout<<arvore<<" ";
						}
					}
					cout<<endl<<endl;
					tiro--;
					arvore=0;
					
					cout << "\n\nEscolha uma arvore para atirar\n\n>>> "; cin >> tiroArvore;
			cout << endl << endl;
			if (tiroArvore>=1 && tiroArvore<=100){
				if (nStatico>=tiroArvore){
					dif=nStatico-tiroArvore;
				}else{
					dif=tiroArvore-nStatico;
				}
				if (dif<=5){
					cout << "Voce esta muito perto da arvore certa! (menos de 5)";
				}else if (dif<=10){
					cout << "Voce esta perto da arvore certa! (menos de 10)";
				}else if (dif<=30){
					cout << "Voce esta um pouco longe da arvore certa! (menos de 30)";
				} else if (dif<=50){
					cout << "Voce esta longe da arvore certa! (menos de 50)";
				}else{
					cout << "Voce esta muito longe da arvore certa!";
				}
				if(tiroArvore==nStatico){
					tiro=tiro-10;
					system("cls");
					cout << "\n				TIROS RESTANTES: " << tiro+10 << endl;
					cout << "\n			PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
				}else if(tiroArvore!=nStatico){
					cout << endl;
	
					cout<<"\nVoce errou!\n\n";
					system("pause");
				}
				if(tiro==0){
					system("cls");					
					cout << "\n				TIROS: " << tiro << endl;
					cout << "\n			Suas balas acabaram!";
					cout << "\n			Voce foi pego pelo Marciano!";
					cout << "\n			Voce foi abduzido!!!";
					cout << "\n			O Marciano estava na arvore " << nStatico << endl << endl;
				}
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
		}
	}else{
		cout<<"\n\n				Nivel nao existente\n\n";
	}
	}else{
		cout<<"\n\n				Idioma invalido"<<endl;
	}
		cout << endl << endl;
system("PAUSE");
}

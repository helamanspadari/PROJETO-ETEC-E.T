#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	
	int mFloresta[10][10]; //matriz para floresta
	int i,j; //var para repetiçoes
	int idioma,arvore=0,tiro=5,tiroArvore; //var para utilidades
	int nRandomico,nStatico; //var para randomico (local alien)
	
	
	srand(time(0));
	nRandomico=rand()%100;
	nStatico=nRandomico;
	
	cout<<"          Selecione o idioma:\n\n     <1> Portugues  /  <2> Ingles\n\n>>>";cin>>idioma;
	
	if(idioma==1){
		cout<<"\n                            BEM VINDO A FLORESTA"<<endl<<endl<<endl;
		cout<<"\n Situacao:"<<endl<<endl;
		cout<<"	Voce e um lenhador, um dia voce estava passeando pela floresta de 100 arvores e de repente ele avistou uma luz estranha no ceu, se aproximou da luz e percebeu que desceu algo da luz, um marciano se escondeu atras de uma das 100 arvores, assustado, sacou sua espingarda que tem apenas 5 tiros";
		cout<<"\nAgora voce esta na floresta e esta tentando acertar o marciano.";
		cout<<endl;
		system("pause");
		
		cout<<"\n\n                                    FLORESTA"<<endl<<endl;
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
			
			cout<<"\n\nEscolha uma arvore para atirar\n\n>>> "; cin>>tiroArvore;
			cout<<endl<<endl;
			
			if(tiroArvore==nStatico && tiroArvore>=1){
				tiro=tiro-10;
				cout<<"\nTIROS RESTANTES: "<<tiro+10<<endl;
				cout<<"PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
			}else if(tiroArvore!=nStatico && tiroArvore>=1){
				cout<<endl;

				cout<<"\nVoce errou!\n\n";
				system("pause");
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
			if(tiro==0){
				cout<<"\n	TIROS: "<<tiro<<endl;
				cout<<"\nSuas balas acabaram!\nVoce foi pego pelo Marciano!\nVoce foi abduzido!!!";
				cout<<"\nO Marciano estava na arvore "<<nStatico<<endl<<endl;
			}
		}
		cout<<endl<<endl;
	}else if(idioma==2){
		cout<<"\n                            WELCOME TO THE JUNGLE"<<endl<<endl<<endl;
		cout<<"\n Situacao:"<<endl<<endl;
		cout<<"	Voce e um lenhador, um dia voce estava passeando pela floresta de 100 arvores e de repente ele avistou uma luz estranha no ceu, se aproximou da luz e percebeu que desceu algo da luz, um marciano se escondeu atras de uma das 100 arvores, assustado, sacou sua espingarda que tem apenas 5 tiros";
		cout<<"\nAgora voce esta na floresta e esta tentando acertar o marciano.";
		cout<<"\n\n                                    FLOREST"<<endl<<endl;
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
			
			cout<<"\n\nEscolha uma arvore para atirar\n\n>>> "; cin>>tiroArvore;
			cout<<endl<<endl;
			
			if(tiroArvore==nStatico && tiroArvore>=1){
				tiro=tiro-10;
				cout<<"\nTIROS RESTANTES: "<<tiro+10<<endl;
				cout<<"PARABENS VOCE ELIMINOU O MARCIANO!\n\n";
			}else if(tiroArvore!=nStatico && tiroArvore>=1){
				cout<<endl;

				cout<<"\nVoce errou!\n\n";
				system("pause");
			}else{
				cout << "Voce perdeu um tiro por atirar em uma arvore que nao existe!\n\n";
			}
			if(tiro==0){
				cout<<"\n	TIROS: "<<tiro<<endl;
				cout<<"\nSuas balas acabaram!\nVoce foi pego pelo Marciano!\nVoce foi abduzido!!!";
				cout<<"\nO Marciano estava na arvore "<<nStatico<<endl<<endl;
			}
		}
		cout<<endl<<endl;
	}else{
		cout<<"Idioma invalido"<<endl;
	}
system("PAUSE");
}

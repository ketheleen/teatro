#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale>

using namespace std;

/*1. Projeto Bilheteria:

Um teatro possui 600 lugares dispostos em 15 fileiras com 40 poltronas cada.

Deseja-se um sistema de controle de ocupação que ofereça as seguintes opções, através de um seletor:

0.	Finalizar
1.	Reservar poltrona
2.	Mapa de ocupação
3.	Faturamento
A opção 1 deverá solicitar a informação da fileira e da poltrona.
Os dados devem ser consistidos no sentido da garantia de serem válidos.
Caso o lugar esteja vago, efetuar a reserva e informar o usuário do sucesso da operação.
Caso o lugar já se encontre ocupado, alertar o usuário com uma mensagem.

A opção 2 deverá gerar na tela um “mapa” de ocupação do teatro com uma legenda onde:

‘.’ representa lugar vago
‘#’ representa lugar ocupado
A opção 3 deverá apresentar na tela as seguintes informações:

Qtde de lugares ocupados: 	999
Valor da bilheteria: 		R$ 9999,99
Sabendo-se que:

Fileiras 1 a 5:       R$ 50,00
Fileiras 6 a 10:     R$ 30,00
Fileiras 11 a 15:   R$ 15,00
*/
int main (){
	int opcao;
	int teatro[15][40];
	int cadeira,fileira;
	int c,f;
	float total;
	int qt=0;
	int contador1=0;
	int contador2=0;
	int contador3=0;
	int contador4=0;
	int contador5=0;
	int contador6=0;
	int c1=0;
	int c2=0;
	int c3=0;
	string voltar;
	
	setlocale(LC_ALL,"portuguese");
		for (f= 0; f <15; f++)
			{
				for (c=0; c<40;c++)
				{
					teatro[f][c]=0;
				}
			}
	do {
		cout << "Selecione a opcao: " << endl;
		cout << "0. Finalizar" << endl;
		cout << "1. Reservar" << endl;
		cout << "2. Mapa" << endl;
		cout << "3. Faturamento" << endl;		
		cin>> opcao;
		system("CLS");
		if(opcao == 1)
		{
			do {
			cout << "Informe a fileira: "	<< endl;
			cin >>fileira;
			}while (fileira < 1 || fileira > 15);
			do {
			cout<<"Informe a poltrona: " <<endl;
			cin >>cadeira;
			}while (cadeira < 1 || cadeira > 15);
			
        	if (fileira >= 1 && fileira<=5 ){
			contador1++;
			c2++;
			}
        	if (fileira >= 6 && fileira<=10 ){
			contador2++;
			c1++;
			}
			if (fileira >= 11 && fileira <=15){ 
			contador3++;
			c3++;
			} 
			if (teatro[fileira-1][cadeira-1] == 1)
			{
			cout<<"Reserva já realizada. Escolha outra!"<<endl;	
			}
			 if (teatro[fileira][cadeira] == 0){
			teatro[fileira-1][cadeira-1] = 1;
		    cout <<"Poltrona reservada com sucesso!" ;}
            
		}
		if (opcao == 2)
		{
		cout << "1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40"<<endl;
			for (f= 0; f <15; f++)
			{
				for (c=0; c<40;c++)
				{
				cout << teatro[f][c]<<"  ";
				}
			cout <<"   " << f << endl;
		}
		}
		if(opcao == 3){
		
			for (int i = 0 ; i<1 ; i++)
			{
		contador4 = contador1*50;
		contador5 = contador2*30;	
		contador6 = contador3*15;	
        total = contador4+contador5+contador6;
        qt = c1+c2+c3;
		cout << "Total: " << total<< endl<<endl;
		cout << "Quantidade de poltronas reservadas: " << qt << endl<<"Aperte um número para voltar: "<<endl;
		cin >> voltar;
			}
			system("CLS");
	}
	}while (opcao!=0);

	}
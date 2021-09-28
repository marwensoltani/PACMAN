#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char plateau[21+1], nomfin[20];
char player='0', pos, adv='X', debut, fin;
int vie, tour=1, tourAdv, x, y, score, bonus;

void clear(void)
{
	plateau[0]=plateau[1]=plateau[2]=plateau[3]=plateau[4]=plateau[5]=plateau[6]=plateau[7]=plateau[8]=plateau[9]=plateau[10]=plateau[11]=plateau[12]=plateau[13]=plateau[14]=plateau[15]=plateau[16]=plateau[17]=plateau[18]=plateau[19]=plateau[20]=' ';
}

void affichegrille()
{
	system("CLS");
	printf("Votre score est de :%d\n\n",tour);
	printf("\n\n\n");
	printf("_____________\n");
	printf("| | | | | | |\n");
	printf("|%c|%c|%c|%c|%c|%c|\n",plateau[0],plateau[1],plateau[2],plateau[3],plateau[4],plateau[5]);
	printf("|_|_|_|_|_|_|\n");
	printf("|/////|_|///|\n");
	printf("|/////|%c|///|\n",plateau[6]);
	printf("|/////|_|///|\n");
	printf("|/////|_|///|\n");
	printf("|/////|%c|///|\n",plateau[7]);
	printf("|/////|_|///|\n");
	printf("|_|_|_|_|_|_|\n");
	printf("|%c|%c|%c|%c|%c|%c|\n",plateau[8],plateau[9],plateau[10],plateau[11],plateau[12],plateau[13]);
	printf("|_|_|_|_|_|_|\n");
	printf("|///|_|/////|\n");
	printf("|///|%c|/////|\n",plateau[14]);
	printf("|///|_|/////|\n");
	printf("|_|_|_|_|_|_|\n");
	printf("|%c|%c|%c|%c|%c|%c]\n",plateau[15],plateau[16],plateau[17],plateau[18],plateau[19],plateau[20]);
	printf("|_|_|_|_|_|_|\n");
}

void updatePlayer()
{
	if(x==7&&y==0)	vie--;
	if(x==7&&y==1)	vie--;
	if(x==7&&y==2)	vie--;
	if(x==7&&y==3)	vie--;
	if(x==7&&y==4)	vie--;
	if(x==7&&y==5)	vie--;
	if(x==7&&y==6)	vie--;
	if(x==7&&y==7)	vie--;

	if(x==6&&y==0)	vie--;
	if(x==6&&y==1)	plateau[0]='O';
	if(x==6&&y==2)	plateau[1]='O';
	if(x==6&&y==3)	plateau[2]='O';
	if(x==6&&y==4)	plateau[3]='O';
	if(x==6&&y==5)	plateau[4]='O';
	if(x==6&&y==6)	plateau[5]='O';
	if(x==6&&y==7)	vie--;

	if(x==5&&y==0)	vie--;
	if(x==5&&y==1)	vie--;
	if(x==5&&y==2)	vie--;
	if(x==5&&y==3)	vie--;
	if(x==5&&y==4)	plateau[6]='O';
	if(x==5&&y==5)	vie--;
	if(x==5&&y==6)	vie--;
	if(x==5&&y==7)	vie--;

	if(x==4&&y==0)	vie--;
	if(x==4&&y==1)	vie--;
	if(x==4&&y==2)	vie--;
	if(x==4&&y==3)	vie--;
	if(x==4&&y==4)	plateau[7]='O';
	if(x==4&&y==5)	vie--;
	if(x==4&&y==6)	vie--;
	if(x==4&&y==7)	vie--;

	if(x==3&&y==0)	vie--;
	if(x==3&&y==1)	plateau[8]='O';
	if(x==3&&y==2)	plateau[9]='O';
	if(x==3&&y==3)	plateau[10]='O';
	if(x==3&&y==4)	plateau[11]='O';
	if(x==3&&y==5)	plateau[12]='O';
	if(x==3&&y==6)	plateau[13]='O';
	if(x==3&&y==7)	vie--;

	if(x==2&&y==0)	vie--;
	if(x==2&&y==1)	vie--;
	if(x==2&&y==2)	vie--;
	if(x==2&&y==3)	plateau[14]='0';
	if(x==2&&y==4)	vie--;
	if(x==2&&y==5)	vie--;
	if(x==2&&y==6)	vie--;
	if(x==2&&y==7)	vie--;

	if(x==1&&y==0)	vie--;
	if(x==1&&y==1)	plateau[15]='O';
	if(x==1&&y==2)	plateau[16]='O';
	if(x==1&&y==3)	plateau[17]='O';
	if(x==1&&y==4)	plateau[18]='O';
	if(x==1&&y==5)	plateau[19]='O';
	if(x==1&&y==6)	plateau[20]='0';
	if(x==1&&y==7)
	{
		bonus=50;
		vie--;
	}

	if(x==0&&y==0)	vie--;
	if(x==0&&y==1)	vie--;
	if(x==0&&y==2)	vie--;
	if(x==0&&y==3)	vie--;
	if(x==0&&y==4)	vie--;
	if(x==0&&y==5)	vie--;
	if(x==0&&y==6)	vie--;
	if(x==0&&y==7)	vie--;
}

void AdvPos()
{
	if(tourAdv==89)
	tourAdv=1;

	//determiner la position de DarkVador en fonction de son tour
	switch(tourAdv)
	{
		case 1:		plateau[20]=adv;	break;
		case 2:		plateau[19]=adv;	break;
		case 3:		plateau[18]=adv;	break;
		case 4:		plateau[17]=adv;	break;
		case 5:		plateau[14]=adv;	break;
		case 6:		plateau[10]=adv;	break;
		case 7:		plateau[11]=adv;	break;
		case 8:		plateau[7]=adv;		break;
		case 9:		plateau[6]=adv;		break;
		case 10:	plateau[3]=adv;		break;
		case 11:	plateau[2]=adv;		break;
		case 12:	plateau[1]=adv;		break;
		case 13:	plateau[0]=adv;		break;
		case 14:	plateau[1]=adv;		break;
		case 15:	plateau[2]=adv;		break;
		case 16:	plateau[3]=adv;		break;
		case 17:	plateau[4]=adv;		break;
		case 18:	plateau[5]=adv;		break;
		case 19:	plateau[4]=adv;		break;
		case 20:	plateau[3]=adv;		break;
		case 21:	plateau[6]=adv;		break;
		case 22:	plateau[7]=adv;		break;
		case 23:	plateau[11]=adv;	break;
		case 24:	plateau[12]=adv;	break;
		case 25:	plateau[13]=adv;	break;
		case 26:	plateau[12]=adv;	break;
		case 27:	plateau[11]=adv;	break;
		case 28:	plateau[10]=adv;	break;
		case 29:	plateau[9]=adv;		break;
		case 30:	plateau[8]=adv;		break;
		case 31:	plateau[9]=adv;		break;
		case 32:	plateau[10]=adv;	break;
		case 33:	plateau[14]=adv;	break;
		case 34:	plateau[17]=adv;	break;
		case 35:	plateau[16]=adv;	break;
		case 36:	plateau[15]=adv;	break;
		case 37:	plateau[16]=adv;	break;
		case 38:	plateau[17]=adv;	break;
		case 39:	plateau[18]=adv;	break;
		case 40:	plateau[19]=adv;	break;
		case 41:	plateau[20]=adv;	break;
		case 42:	plateau[19]=adv;	break;
		case 43:	plateau[18]=adv;	break;
		case 44:	plateau[17]=adv;	break;
		case 45:	plateau[14]=adv;	break;
		case 46:	plateau[10]=adv;	break;
		case 47:	plateau[11]=adv;	break;
		case 48:	plateau[7]=adv;		break;
		case 49:	plateau[6]=adv;		break;
		case 50:	plateau[3]=adv;		break;
		case 51:	plateau[4]=adv;		break;
		case 52:	plateau[5]=adv;		break;
		case 53:	plateau[4]=adv;		break;
		case 54:	plateau[3]=adv;		break;
		case 55:	plateau[2]=adv;		break;
		case 56:	plateau[1]=adv;		break;
		case 57:	plateau[0]=adv;		break;
		case 58:	plateau[1]=adv;		break;
		case 59:	plateau[2]=adv;		break;
		case 60:	plateau[3]=adv;		break;
		case 61:	plateau[6]=adv;		break;
		case 62:	plateau[7]=adv;		break;
		case 63:	plateau[10]=adv;	break;
		case 64:	plateau[9]=adv;		break;
		case 65:	plateau[8]=adv;		break;
		case 66:	plateau[9]=adv;		break;
		case 67:	plateau[10]=adv;	break;
		case 68:	plateau[11]=adv;	break;
		case 69:	plateau[12]=adv;	break;
		case 70:	plateau[13]=adv;	break;
		case 71:	plateau[12]=adv;	break;
		case 72:	plateau[11]=adv;	break;
		case 73:	plateau[10]=adv;	break;
		case 74:	plateau[14]=adv;	break;
		case 75:	plateau[16]=adv;	break;
		case 76:	plateau[17]=adv;	break;
		case 77:	plateau[18]=adv;	break;
		case 78:	plateau[19]=adv;	break;
		case 79:	plateau[20]=adv;	break;
		case 80:	plateau[19]=adv;	break;
		case 81:	plateau[18]=adv;	break;
		case 82:	plateau[17]=adv;	break;
		case 83:	plateau[16]=adv;	break;
		case 84:	plateau[15]=adv;	break;
		case 85:	plateau[16]=adv;	break;
		case 86:	plateau[17]=adv;	break;
		case 87:	plateau[18]=adv;	break;
		case 88:	plateau[19]=adv;	break;
	}
	
}

void Collisions()
{
	tourAdv--;
	if(tourAdv==1&&plateau[20]=='O')	vie--;
	if(tourAdv==2&&plateau[19]=='O')	vie--;
	if(tourAdv==3&&plateau[18]=='O')	vie--;
	if(tourAdv==4&&plateau[17]=='O')	vie--;
	if(tourAdv==5&&plateau[14]=='O')	vie--;
	if(tourAdv==6&&plateau[10]=='O')	vie--;
	if(tourAdv==7&&plateau[11]=='O')	vie--;
	if(tourAdv==8&&plateau[7]=='O')		vie--;
	if(tourAdv==9&&plateau[6]=='O')		vie--;
	if(tourAdv==10&&plateau[3]=='O')	vie--;
	if(tourAdv==11&&plateau[2]=='O')	vie--;
	if(tourAdv==12&&plateau[1]=='O')	vie--;
	if(tourAdv==13&&plateau[0]=='O')	vie--;
	if(tourAdv==14&&plateau[1]=='O')	vie--;
	if(tourAdv==15&&plateau[2]=='O')	vie--;
	if(tourAdv==16&&plateau[3]=='O')	vie--;
	if(tourAdv==17&&plateau[4]=='O')	vie--;
	if(tourAdv==18&&plateau[5]=='O')	vie--;
	if(tourAdv==19&&plateau[4]=='O')	vie--;
	if(tourAdv==20&&plateau[3]=='O')	vie--;
	if(tourAdv==21&&plateau[6]=='O')	vie--;
	if(tourAdv==22&&plateau[7]=='O')	vie--;
	if(tourAdv==23&&plateau[11]=='O')	vie--;
	if(tourAdv==24&&plateau[12]=='O')	vie--;
	if(tourAdv==25&&plateau[13]=='O')	vie--;
	if(tourAdv==26&&plateau[12]=='O')	vie--;
	if(tourAdv==27&&plateau[11]=='O')	vie--;
	if(tourAdv==28&&plateau[10]=='O')	vie--;
	if(tourAdv==29&&plateau[9]=='O')	vie--;
	if(tourAdv==30&&plateau[8]=='O')	vie--;
	if(tourAdv==31&&plateau[9]=='O')	vie--;
	if(tourAdv==32&&plateau[10]=='O')	vie--;
	if(tourAdv==33&&plateau[14]=='O')	vie--;
	if(tourAdv==34&&plateau[17]=='O')	vie--;
	if(tourAdv==35&&plateau[16]=='O')	vie--;
	if(tourAdv==36&&plateau[15]=='O')	vie--;
	if(tourAdv==37&&plateau[16]=='O')	vie--;
	if(tourAdv==38&&plateau[17]=='O')	vie--;
	if(tourAdv==39&&plateau[18]=='O')	vie--;
	if(tourAdv==40&&plateau[19]=='O')	vie--;
	if(tourAdv==41&&plateau[20]=='O')	vie--;
	if(tourAdv==42&&plateau[19]=='O')	vie--;
	if(tourAdv==43&&plateau[18]=='O')	vie--;
	if(tourAdv==44&&plateau[17]=='O')	vie--;
	if(tourAdv==45&&plateau[14]=='O')	vie--;
	if(tourAdv==46&&plateau[10]=='O')	vie--;
	if(tourAdv==47&&plateau[11]=='O')	vie--;
	if(tourAdv==48&&plateau[7]=='O')	vie--;
	if(tourAdv==49&&plateau[6]=='O')	vie--;
	if(tourAdv==50&&plateau[3]=='O')	vie--;
	if(tourAdv==51&&plateau[4]=='O')	vie--;
	if(tourAdv==52&&plateau[5]=='O')	vie--;
	if(tourAdv==53&&plateau[4]=='O')	vie--;
	if(tourAdv==54&&plateau[3]=='O')	vie--;
	if(tourAdv==55&&plateau[2]=='O')	vie--;
	if(tourAdv==56&&plateau[1]=='O')	vie--;
	if(tourAdv==57&&plateau[0]=='O')	vie--;
	if(tourAdv==58&&plateau[1]=='O')	vie--;
	if(tourAdv==59&&plateau[2]=='O')	vie--;
	if(tourAdv==60&&plateau[3]=='O')	vie--;
	if(tourAdv==61&&plateau[6]=='O')	vie--;
	if(tourAdv==62&&plateau[7]=='O')	vie--;
	if(tourAdv==63&&plateau[11]=='O')	vie--;
	if(tourAdv==64&&plateau[10]=='O')	vie--;
	if(tourAdv==65&&plateau[9]=='O')	vie--;
	if(tourAdv==66&&plateau[8]=='O')	vie--;
	if(tourAdv==67&&plateau[9]=='O')	vie--;
	if(tourAdv==68&&plateau[10]=='O')	vie--;
	if(tourAdv==69&&plateau[11]=='O')	vie--;
	if(tourAdv==70&&plateau[12]=='O')	vie--;
	if(tourAdv==71&&plateau[13]=='O')	vie--;
	if(tourAdv==72&&plateau[12]=='O')	vie--;
	if(tourAdv==73&&plateau[11]=='O')	vie--;
	if(tourAdv==74&&plateau[10]=='O')	vie--;
	if(tourAdv==75&&plateau[14]=='O')	vie--;
	if(tourAdv==76&&plateau[17]=='O')	vie--;
	if(tourAdv==77&&plateau[18]=='O')	vie--;
	if(tourAdv==78&&plateau[19]=='O')	vie--;
	if(tourAdv==79&&plateau[20]=='O')	vie--;
	if(tourAdv==80&&plateau[19]=='O')	vie--;
	if(tourAdv==81&&plateau[18]=='O')	vie--;
	if(tourAdv==82&&plateau[17]=='O')	vie--;
	if(tourAdv==83&&plateau[16]=='O')	vie--;
	if(tourAdv==84&&plateau[15]=='O')	vie--;
	if(tourAdv==85&&plateau[16]=='O')	vie--;
	if(tourAdv==86&&plateau[17]=='O')	vie--;
	if(tourAdv==87&&plateau[18]=='O')	vie--;
	if(tourAdv==88&&plateau[19]=='O')	vie--;
	tourAdv++;
}

int main (void)
{

	//sommaire avec description
	printf("                     ________________________________\n");
	printf("                     |          ___________         |\n");
	printf("                     |         |           |        |\n");
	printf("                     |         |  TPacMan  |        |\n");
	printf("                     |         |___________|        |\n");
	printf("                     |______________________________|\n\n\n");

	printf("          Appuyer sur 'q' pour aller a gauche.\n");
	printf("                 -sur 'z' pour aller en haut.\n");
	printf("                 -sur 's' pour aller en bas.\n");
	printf("                 -sur 'd' pour aller a droite.\n\n");

	printf("Chasseur    -> 'X'\n");
	printf("Joueur      -> '0'\n");
	printf("Objectif    -> ']'\n\n");

	printf("Votre but en tant que joueur est d'atteindre l'objectif sans vous faire prendre par le chasseur.\n");

	//debut de la boucle du jeu
	do
	{
		//si c est le premier tour alors les positions sont les suivantes
		if(tour==1)
		{
			printf("\nEntrez votre nom puis appuyez sur Entree pour commencer :\n");
			gets (nomfin);

			plateau[3]=player;
			plateau[20]=adv;
			bonus=0;
			x=6; y=4;
			tourAdv=1;
			vie=1;
		}

		//affichage de la grille de jeu
		affichegrille();
		clear();

		//determiner la boucle du tour de DarkVador
		tourAdv++;
		AdvPos();

		//modification de x et de y en fonction de la lettre saisi par le joueur
		pos=getch();
		if(pos=='q') y--;
		if(pos=='d') y++;
		if(pos=='z') x++;
		if(pos=='s') x--;

		//place et eventuellement mort de LukeS pour chaque configuration de x et de y
		updatePlayer();

		//evaluation de la mort ou non de LukeS si la case est deja occupee par DarkV
		Collisions();
		tour++;
	}
	while (vie==1);
	//fin de la boucle de jeu

	// determination du score avec presence ou non du bonus
	score=bonus+tour;

	// si non alors le joueur a perdu
	// system("CLS");
	if(bonus==0)	printf("\n\nLe Chasseur a ete plus ruse que vous, %s... Vous avez perdu.\n\n", nomfin);

	//si oui alors le joueur a gagne
	if(bonus==50)
	{
		// system("CLS");
		printf("\n\n%s a atteint l'objectif. Vous remportez la victoire.\nVous etes acclame par votre public !\n\n", nomfin);
		system("PAUSE");
		system("CLS");
	
		//evaluation du niveau du joueur en fonction du score
		if(score<150)
		{
			printf("______________________\n");
			printf("|                     |\n");
			printf("| Vous voila Apprenti |\n");
			printf("|_____________________|\n\n");
			printf("Vous pouvez faire mieux, mais c'est un debut !\n\n");
			printf("%s, votre score est de : %d\n\n", (nomfin), score);
		}
		if(score>150&&score<200)
		{
			printf("____________________\n");
			printf("|                   |\n");
			printf("| Vous voila Pilote |\n");
			printf("|___________________|\n\n");
			printf("C'est de mieux en mieux. Faites encore des efforts, vous serez encore meilleur.\n\n");
			printf("%s, votre score est de : %d\n\n", (nomfin), score);
		}
		if(score>200&&bonus==50)
		{
			printf("________________________\n");
			printf("|                       |\n");
			printf("|  Vous voila Empereur  |\n");
			printf("|_______________________|\n\n");
			printf("Mes felicitations, vous etes desormais le maitre inconteste des lieux !\n\n");
			printf("%s, votre score est de : %d\n\n", (nomfin), score);
		}
	}

	system("PAUSE");

	//affichage des credits et des mentions legales
	system("CLS");
	printf("TPacMan, v.1.0,\nStudios Tastalian\nhttp://tastalian.free.fr\n\n");
	printf("A partir de S-W du Studio Amanga\nhttp://studioamanga.free.fr\n");

	// system("PAUSE"); // Pas n�cessaire si compil� par Visual C++
	return 0;
}

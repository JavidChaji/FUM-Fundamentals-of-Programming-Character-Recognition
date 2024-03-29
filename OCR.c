#include <stdio.h>
#include "./bmpio/include/bmpio.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
// #include <QApplication>
// #include "Windows.h"
// #include <conio.h>


#define WIDTH 500
#define HEIGHT 500
#define SIZE 500


unsigned char g_pic[2000][2000][3];
unsigned char g_cic[2000][2000][3];
unsigned char g_fic[2000][2000][3];
unsigned char g_ave[2000][2000][3];
unsigned char g_detect[2000][2000][3];
unsigned char g_asl[2000][2000][3];


char g_table[100][100], g_downTable[100][100], g_leftTable[100][100], g_upTable[100][100], g_word[20][100];
int g_countword[100] ;


void gotoxy(int x, int y);
void set_text_color(int textColor, int backColor);
void hide_cursor();
void frame();
int strstr1(char a[], char b[], int *y, int *g);
void scale(int numsampeles, char harf[100], char saveq[100]);
void crop(int numsampeles, char harf[100], char saveq[100]);
void learning(int numsampeles, char harf);
char detected_letters(char p[100]);
void similarity(char harf, char *find, int *maxtatbigh);
void read_table(int *radif, int *soton, int *width, int *height);
int find_word();



int main()
{
	int v, h, i, x, y, z, q, j, u,hg,fd=0;
	char key,strig[20][100];
	set_text_color(7, 0);
	frame();
	gotoxy(2, 51);
	set_text_color(12, 0);
	printf("Welcome to Software");
	gotoxy(20, 55);
	set_text_color(8, 0);
	printf("   Loded   ");

	gotoxy(22, 50);
	for (v = 0; v < 22; v++)
	{
		printf("-");
	}
	gotoxy(3, 4);
	set_text_color(1, 0);
	printf("Please select your favorite option:");
	gotoxy(7, 19);
	set_text_color(10, 0);
	printf("1.Learning :");
	gotoxy(11, 15);
	set_text_color(11, 0);
	printf("2.Detect :");
	gotoxy(15, 11);
	set_text_color(12, 0);
	printf("3.Search :");
	gotoxy(19, 7);
	set_text_color(13, 0);
	printf("4.Creators :");
	gotoxy(22, 4);
	set_text_color(14, 0);
	printf("5.Exit");

	for (i = 0; i < 1000; i++)
	{
		gotoxy(3, 40);
		scanf("%d", &h);
		if (h == 1)
		{
			crop(32, "DataSet/A/", "CropedDataSet/A/"); crop(41, "DataSet/B/", "CropedDataSet/B/"); crop(32, "DataSet/E/", "CropedDataSet/E/"); crop(15, "DataSet/I/", "CropedDataSet/I/"); crop(25, "DataSet/O/", "CropedDataSet/O/"); crop(17, "DataSet/R/", "CropedDataSet/R/"); crop(20, "DataSet/S/", "CropedDataSet/S/");
			scale(32, "CropedDataSet/A/", "ScaledDataSet/A/"); scale(41, "CropedDataSet/B/", "ScaledDataSet/B/"); scale(32, "CropedDataSet/E/", "ScaledDataSet/E/"); scale(15, "CropedDataSet/I/", "ScaledDataSet/I/"); scale(25, "CropedDataSet/O/", "ScaledDataSet/O/"); scale(17, "CropedDataSet/R/", "ScaledDataSet/R/"); scale(20, "CropedDataSet/S/", "ScaledDataSet/S/");
			learning(32, 'A'); learning(41, 'B'); learning(32, 'E'); learning(15, 'I'); learning(25, 'O'); learning(17, 'R'); learning(20, 'S');
			gotoxy(7,32);
			printf("Learning was Successfull!");
		}
		if (h == 2)
		{
			read_table(&x,&y,&z,&q);
			for (q = 0; q < x; q++)
			{
				for (j = 0; j < y; j++)
				{
					gotoxy(4 + q, 74 + j);
					printf("%c", g_table[q][j]);
				}
				printf("\n");
			}
			
		}
		if (h == 3)
		{
			gotoxy(5,4);
			printf("Do you enter the words manual? 1.Manual  2.Automatic :");

			gotoxy(5,60);
			scanf("%d", &u);
			if (u==1)
			{
				FILE* input1;
				input1 = fopen("Dictionary.txt","w");
				gotoxy(15, 22);
				printf("Please inter number of words :");
				gotoxy(15, 52);
				scanf("%d", &hg);
				fprintf(input1, "%d\n", hg);
				for (z = 0; z < hg; z++)
				{
					gotoxy(17,22);
					printf("Please fill in our favorite words :");
					gotoxy(17,58);
					scanf("%s",&strig[z]);
					fprintf(input1, "%s\n",strig[z]);
				}
				fclose(input1);
				hg = find_word();
				for (z = 0; z < hg; z++)
				{
					gotoxy(4+z,90);
					printf("#  %s  #    %d\n",strig[z],g_countword[z]);
				}
			}
			if (u == 2)
			{
				hg = find_word();
				for (z = 0; z <hg ; z++)
				{
					gotoxy(4+z,90);
					printf("#  %s  #    %d\n", g_word[z], g_countword[z]);
				}
			}
		}
		if (h == 4)
		{
			gotoxy(19, 21);
			printf("Javid Chaji");
		}
		if (h == 5)
		{
			exit(1);
			gotoxy(24, 24);
		}
	}
	
	gotoxy(24, 24);

	
	
}



void crop(int numsampeles, char harf[100], char saveq[100])
{
	char p[100];
	int width, height;
	int j, i, g;
	for (g = 0; g < numsampeles; g++)
	{
		sprintf(p, "%s%d.bmp", harf, g + 1);
		readBMP(p, &width, &height, g_pic);
		int maxj = width - 1, maxi = height - 1;
		int mini = -1, minj = -1, k, mj = 0;
		for (i = 0; i < height && mini == -1; i++)
		{
			for (j = 0; j < width && minj == -1; j++)
			{
				if (g_pic[i][j][0] != 255 || g_pic[i][j][1] != 255 || g_pic[i][j][2] != 255)
				{
					mini = i;
					minj = j;
				}
			}
		}

		for (j = minj; j < width && maxj == width - 1; j++)
		{
			for (i = mini; i < height && (g_pic[i][j][0] == 255 && g_pic[i][j][1] == 255 && g_pic[i][j][2] == 255); i++);

			if (i >= height)
			{
				maxj = j - 1;
			}
		}

		for (j = minj; j >= 0 && mj == 0; j--)
		{
			for (i = mini; i < height && (g_pic[i][j][0] == 255 && g_pic[i][j][1] == 255 && g_pic[i][j][2] == 255); i++);

			if (i >= height)
			{
				mj = j + 1;
			}
		}

		for (i = mini; i < height && maxi == height - 1; i++)
		{
			for (j = mj; j <= maxj && (g_pic[i][j][0] == 255 && g_pic[i][j][1] == 255 && g_pic[i][j][2] == 255); j++);
			if (j > maxj)
			{
				maxi = i - 1;
			}
		}

		for (i = mini; i <= maxi; i++)
		{
			for (j = mj; j <= maxj; j++)
			{
				for (k = 0; k < 3; k++)
				{
					g_cic[i - mini][j - mj][k] = g_pic[i][j][k];
				}
			}
		}

		height = maxi - mini + 1;
		width = maxj - mj + 1;
		sprintf(p, "%s%d.bmp", saveq, g + 1);
		saveBMP(g_cic, width, height, p);
	}
}



void scale(int numsampeles, char harf[100], char saveq[100])
{
	char p[100];
	int width, height, i, j, k, g;
	double wnesbat, sahmbadi, hnesbat, sahm;
	for (g = 0; g < numsampeles; g++)
	{
		sprintf(p, "%s%d.bmp", harf, g + 1);
		readBMP(p, &width, &height, g_pic);
		wnesbat = (double)WIDTH / width;
		sahm = wnesbat;
		k = 0;
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < WIDTH; j++)
			{

				if (sahm >= 1)
				{
					g_cic[i][j][0] = g_pic[i][k][0];
					g_cic[i][j][1] = g_pic[i][k][1];
					g_cic[i][j][2] = g_pic[i][k][2];
					sahm--;
				}
				else
				{
					sahmbadi = 1 - sahm;
					g_cic[i][j][0] = sahm * g_pic[i][k][0] + sahmbadi * g_pic[i][k + 1][0];
					g_cic[i][j][1] = sahm * g_pic[i][k][1] + sahmbadi * g_pic[i][k + 1][1];
					g_cic[i][j][2] = sahm * g_pic[i][k][2] + sahmbadi * g_pic[i][k + 1][2];
					k++;
					sahm = wnesbat - sahmbadi;
				}
			}
			k = 0;
		}
		hnesbat = (double)HEIGHT / height;
		sahm = hnesbat;
		k = 0;
		for (j = 0; j < WIDTH; j++)
		{
			for (i = 0; i < HEIGHT; i++)
			{
				if (sahm >= 1)
				{
					g_fic[i][j][0] = g_cic[k][j][0];
					g_fic[i][j][1] = g_cic[k][j][1];
					g_fic[i][j][2] = g_cic[k][j][2];
					sahm--;
				}
				else
				{
					sahmbadi = 1 - sahm;
					g_fic[i][j][0] = sahm * g_cic[k][j][0] + sahmbadi * g_cic[k + 1][j][0];
					g_fic[i][j][1] = sahm * g_cic[k][j][1] + sahmbadi * g_cic[k + 1][j][1];
					g_fic[i][j][2] = sahm * g_cic[k][j][2] + sahmbadi * g_cic[k + 1][j][2];
					k++;
					sahm = hnesbat - sahmbadi;
				}
			}
			k = 0;
		}
		sprintf(p, "%s%d.bmp", saveq, g + 1);
		saveBMP(g_fic, WIDTH, HEIGHT, p);
	}
}



void learning(int numsampeles, char harf)
{
	char p[100];
	int width, height;
	int i, j, k;
	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			g_ave[i][j][0] = 0;
			g_ave[i][j][1] = 0;
			g_ave[i][j][2] = 0;
		}
	}
	for (k = 0; k < numsampeles; k++)
	{
		sprintf(p, "ScaledDataSet/%c/%d.bmp", harf, k + 1);
		readBMP(p, &width, &height, g_pic);
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				g_ave[i][j][0] = g_ave[i][j][0] + (g_pic[i][j][0] / numsampeles);
				g_ave[i][j][1] = g_ave[i][j][1] + (g_pic[i][j][1] / numsampeles);
				g_ave[i][j][2] = g_ave[i][j][2] + (g_pic[i][j][2] / numsampeles);
			}
		}
	}
	sprintf(p, "LearnedLetters/%c/%c.bmp", harf, harf);
	saveBMP(g_ave, 500, 500, p);
}



char detected_letters(char p[100])
{
	char find = '=';
	int width, height, maxtatbigh = 1920000000;
	readBMP(p, &width, &height, g_pic);
	similarity('A', &find, &maxtatbigh);
	similarity('B', &find, &maxtatbigh);
	similarity('E', &find, &maxtatbigh);
	similarity('I', &find, &maxtatbigh);
	similarity('O', &find, &maxtatbigh);
	similarity('R', &find, &maxtatbigh);
	similarity('S', &find, &maxtatbigh);
	return find;
}



void similarity(char harf, char *find, int *maxtatbigh)
{
	int i = 0, j = 0, count = 0, width2, height2;
	char p[100];
	sprintf(p, "LearnedLetters/%c/%c.bmp", harf, harf);
	readBMP(p, &width2, &height2, g_ave);

	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			count += abs(g_ave[i][j][0] - g_pic[i][j][0]) + abs(g_ave[i][j][1] - g_pic[i][j][1]) + abs(g_ave[i][j][2] - g_pic[i][j][2]);
		}
	}
	if (count < *maxtatbigh)
	{
		*find = harf;
		*maxtatbigh = count;
	}
}



void read_table(int *radif, int *soton, int *width, int *height)
{
	char p[100], adress[100], daw[100];
	int  jabejai = 0, kadri, kadrj, countrow, countsoton;
	int j, i, k, n, z = 0;
	int g = 0;
	countrow = 0;
	countsoton = 0;
	gotoxy(11, 26);
	printf("Please enter your picture address :");
	gotoxy(13, 16);
	//scanf("%s", &p);
	gets(p);
	readBMP(p, &*width, &*height, g_asl);
	gets(p);
	readBMP(p, &*width, &*height, g_asl);
	g = 0;
	jabejai = 0;
	for (i = 0; i < *height; i++)
	{
		g = 0;
		for (j = 0; (j < *width) && (jabejai == 0); j++)
		{
			if (g_asl[i][j][0] != 255 || g_asl[i][j][1] != 255 || g_asl[i][j][2] != 255)
			{
				countrow++;
				jabejai = 1;
				i++;
			}
		}
		for (k = 0; (k < *width) && (jabejai == 1); k++)
		{
			if (g_asl[i][k][0] == 255 && g_asl[i][k][1] == 255 && g_asl[i][k][2] == 255)
			{
				g++;
			}
			if (g >= *width)
			{
				jabejai = 0;
				i++;
			}
		}

	}
	g = 0;
	jabejai = 0;
	for (j = 0; j < *width; j++)
	{
		g = 0;
		for (i = 0; (i < *height) && (jabejai == 0); i++)
		{
			if (g_asl[i][j][0] != 255 || g_asl[i][j][1] != 255 || g_asl[i][j][2] != 255)
			{
				countsoton++;
				jabejai = 1;
				j++;
			}
		}
		for (k = 0; (k < *height) && (jabejai == 1); k++)
		{
			if (g_asl[k][j][0] == 255 && g_asl[k][j][1] == 255 && g_asl[k][j][2] == 255)
			{
				g++;
			}
			if (g >= *height)
			{
				jabejai = 0;
				j++;
			}
		}

	}
	*radif = countrow;
	*soton = countsoton;
	kadrj = *width / countsoton;
	kadri = *height / countrow;
	for (k = 0; k < countrow; k++)
	{
		for (n = 0; n < countsoton; n++)
		{
			for (i = 0 + (k * kadri), z = 0; i < *width && i < ((k + 1) * kadri); i++, z++)
			{
				for (j = 0 + (n * kadrj), g = 0; j < *height && j < ((n + 1)*kadrj); j++, g++)
				{
					g_detect[z][g][0] = g_asl[i][j][0];
					g_detect[z][g][1] = g_asl[i][j][1];
					g_detect[z][g][2] = g_asl[i][j][2];
				}
			}
			sprintf(adress, "DetectedLetters/ %d %d1.bmp", k, n);
			saveBMP(g_detect, kadrj, kadri, adress);
			sprintf(adress, "DetectedLetters/ %d %d", k, n);
			sprintf(daw, "CropedDetectedLetters/ %d %d", k, n);
			crop(1, adress, daw);
			sprintf(adress, "CropedDetectedLetters/ %d %d", k, n);
			sprintf(daw, "ScaledDetectedLetters/ %d %d", k, n);
			scale(1, adress, daw);
		}
	}
	for (i = 0; i < countrow; i++)
	{
		for (j = 0; j < countsoton; j++)
		{
			sprintf(adress, "ScaledDetectedLetters/ %d %d1.bmp", i, j);
			g_table[i][j] = detected_letters(adress);
			
		}
	}


}



int find_word()
{
	int numwords, i, rang = (rand()*2.55), numwordss, rang1 = (rand()*2.55), width, height, j, radif, n, soton, k, z, g = 0, kadrj, kadri, iaword[100], ibword[100], jaword[100], jbword[100], jg = 0, ig = 0, jsabet[100] = { 0 }, isabet[100] = { 0 };
	char temp;
	g_countword[100] =  0 ;
	FILE*infile;
	infile = fopen("Dictionary.txt", "r");
	fscanf(infile, "%d", &numwords);
	numwordss = numwords;
	for (i = 0; i < numwords; i++)
	{
		fscanf(infile, "%s", &g_word[i]);
	}
	read_table(&radif, &soton, &width, &height);
	for (i = 0; i < radif; i++)
	{
		for (j = 0; j < soton; j++)
		{
			g_downTable[j][i] = g_table[i][j];
		}
	}
	for (i = 0; i < radif; i++)
	{
		for (j = 0; j < soton; j++)
		{
			g_leftTable[i][j] = g_table[i][soton - 1 - j];
		}
	}
	for (i = 0; i < radif; i++)
	{
		for (j = 0; j < soton; j++)
		{
			g_upTable[i][j] = g_downTable[i][soton - 1 - j];
		}
	}
	for (i = 0; i < numwords; i++)
	{
		for (j = 0; j < radif; j++)
		{
			if (strstr1(g_table[j], g_word[i], &jaword[jg], &jbword[jg]))
			{
				g_countword[i]++;
				isabet[jg] = j;
				jg++;
			}
		}
	}
	for (i = 0; i < numwords; i++)
	{
		for (j = 0; j < soton; j++)
		{
			if (strstr1(g_downTable[j], g_word[i], &iaword[ig], &ibword[ig]))
			{
				g_countword[i]++;
				jsabet[ig] = j;
				ig++;
			}
		}
	}
	for (i = 0; i < numwords; i++)
	{
		for (j = 0; j < radif; j++)
		{
			if (strstr1(g_leftTable[j], g_word[i], &jbword[jg], &jaword[jg]))
			{
				g_countword[i]++;
				jaword[jg] = radif - 1 - jaword[jg];
				jbword[jg] = radif - 1 - jbword[jg];
				isabet[jg] = j;
				jg++;
			}
		}
	}
	for (i = 0; i < numwords; i++)
	{
		for (j = 0; j < soton; j++)
		{
			if (strstr1(g_upTable[j], g_word[i], &ibword[ig], &iaword[ig]))
			{
				g_countword[i]++;
				iaword[ig] = soton - 1 - iaword[ig];
				ibword[ig] = soton - 1 - ibword[ig];
				jsabet[ig] = j;
				ig++;
			}
		}
	}
	kadrj = width / soton;
	kadri = height / radif;
	for (z = 0; z < ig; z++)
	{
		for (k = iaword[z]; k <= ibword[z]; k++)
		{
			for (i = 0 + (k * kadri); i < width && i < ((k + 1) * kadri); i++)
			{
				for (j = 0 + (jsabet[z] * kadrj); j < height && j < ((jsabet[z] + 1)*kadrj); j++)
				{
					if (g_asl[i][j][0] != 255 || g_asl[i][j][1] != 255 || g_asl[i][j][2] != 255)
					{
						g_asl[i][j][0] = rang;
						g_asl[i][j][1] = rang1;
						g_asl[i][j][2] = 0;
					}
				}
			}
		}
		rang /= 2;
		rang1 /= 2;
	}
	rang = (rand()*2.55);
	rang1 = (rand()*2.55);
	for (z = 0; z < jg; z++)
	{
		for (k = jaword[z]; k <= jbword[z]; k++)
		{
			for (i = 0 + (isabet[z] * kadri); i < width && i < ((isabet[z] + 1) * kadri); i++)
			{
				for (j = 0 + (k * kadrj); j < height && j < ((k + 1)*kadrj); j++)
				{
					if (g_asl[i][j][0] != 255 || g_asl[i][j][1] != 255 || g_asl[i][j][2] != 255)
					{
						g_asl[i][j][0] = 0;
						g_asl[i][j][1] = rang;
						g_asl[i][j][2] = rang1;
					}
				}
			}
		}
		rang /= 2;
		rang1 /= 2;
	}
	for (i = 0; i < numwords; i++)
	{
		printf("%d\n", g_countword[i]);
	}
	saveBMP(g_asl, width, height, "DetectedWords.bmp");
	return numwordss;
}



int strstr1(char a[], char b[], int *y, int *g)
{
	int aSize = strlen(a), i, j;
	int bSize = strlen(b);

	for (i = 0; i < aSize - bSize + 1; i++)
	{
		int fNum = 0;
		for (j = 0; j < bSize; ++j)
		{
			if (a[i + j] == b[j])
				fNum++;
		}
		*y = i;
		*g = i + j - 1;
		if (fNum == bSize)
		{
			return 1;
		}
	}
	j = -1;
	i = -1;
	return 0;

}



// void gotoxy(int x, int y)
// {
// 	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
// 	COORD cursorCoord;
// 	cursorCoord.X = y;
// 	cursorCoord.Y = x;
// 	SetConsoleCursorPosition(consoleHandle, cursorCoord);
// }



// void set_text_color(int textColor, int backColor)
// {

// 	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
// 	int colorAttribute = backColor << 4 | textColor;
// 	SetConsoleTextAttribute(consoleHandle, colorAttribute);
// }



// void hide_cursor()
// {
// 	HANDLE myconsole = GetStdHandle(STD_OUTPUT_HANDLE);

// 	CONSOLE_CURSOR_INFO CURSOR;
// 	CURSOR.dwSize = 1;
// 	CURSOR.bVisible = FALSE;
// 	SetConsoleCursorInfo(myconsole, &CURSOR);
// }



void frame()
{
	int i, j, v;
	set_text_color(6, 0);
	printf("***********************************************     In The Name Of God     ***********************************************");
	printf("#########################################^^^<><><><><><><><><><><><><><>^^^############################################");
	for (i = 1; i < 25; i++)
	{
		gotoxy(i, 0);
		printf("*#");
	}
	for (i = 1; i < 25; i++)
	{
		gotoxy(i, 118);
		printf("#*");
	}
	for (i = 0; i < 119; i++)
	{
		gotoxy(24, i);
		printf("!!");
	}
	set_text_color(8, 0);
	gotoxy(24, 50);
	for (v = 0; v < 22; v++)
	{
		printf("|");
	}


}
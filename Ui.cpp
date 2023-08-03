/********************************************************************************
** Form generated from reading UI file 'DetectorgJVTyl.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DETECTORGJVTYL_H
#define DETECTORGJVTYL_H

#define WIDTH 500
#define HEIGHT 500
#define SIZE 500


#include <stdio.h>
#include "./bmpio/include/bmpio.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>



unsigned char g_pic[2000][2000][3];
unsigned char g_cic[2000][2000][3];
unsigned char g_fic[2000][2000][3];
unsigned char g_ave[2000][2000][3];
unsigned char g_detect[2000][2000][3];
unsigned char g_asl[2000][2000][3];


char g_table[100][100], g_downTable[100][100], g_leftTable[100][100], g_upTable[100][100], g_word[20][100];
int g_countword[100] ;


QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *letter_input;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *output_letter_box;
    QGraphicsView *input_picture_view;
    QWidget *tab_2;
    QPushButton *detect_button;
    QTextBrowser *loger;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        letter_input = new QTextEdit(centralwidget);
        letter_input->setObjectName(QString::fromUtf8("letter_input"));
        letter_input->setGeometry(QRect(10, 10, 231, 411));
        letter_input->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(250, 10, 541, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        output_letter_box = new QTextBrowser(tab);
        output_letter_box->setObjectName(QString::fromUtf8("output_letter_box"));
        output_letter_box->setGeometry(QRect(260, 100, 256, 231));
        input_picture_view = new QGraphicsView(tab);
        input_picture_view->setObjectName(QString::fromUtf8("input_picture_view"));
        input_picture_view->setGeometry(QRect(10, 21, 231, 381));
        input_picture_view->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        QBrush brush(QColor(245, 194, 17, 255));
        brush.setStyle(Qt::NoBrush);
        input_picture_view->setBackgroundBrush(brush);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        detect_button = new QPushButton(centralwidget);
        detect_button->setObjectName(QString::fromUtf8("detect_button"));
        detect_button->setGeometry(QRect(70, 430, 111, 26));
        loger = new QTextBrowser(centralwidget);
        loger->setObjectName(QString::fromUtf8("loger"));
        loger->setEnabled(true);
        loger->setGeometry(QRect(10, 480, 781, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(detect_button, SIGNAL(clicked()), output_letter_box, SLOT(deleteLater()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Main", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Extra", nullptr));
        detect_button->setText(QCoreApplication::translate("MainWindow", "Detect Letters", nullptr));
    } // retranslateUi

public slots:
    void first_func()
    {
        int v, h, i, x, y, z, q, j, u,hg,fd=0;
        char key,strig[20][100];
        printf("Welcome to Software");
        printf("   Loded   ");
        printf("Please select your favorite option:");
        printf("1.Learning :");
        printf("2.Detect :");
        printf("3.Search :");
        printf("4.Creators :");
        printf("5.Exit");

        scanf("%d", &h);
        if (h == 1)
        {
            crop(32, "DataSet/A/", "CropedDataSet/A/"); crop(41, "DataSet/B/", "CropedDataSet/B/"); crop(32, "DataSet/E/", "CropedDataSet/E/"); crop(15, "DataSet/I/", "CropedDataSet/I/"); crop(25, "DataSet/O/", "CropedDataSet/O/"); crop(17, "DataSet/R/", "CropedDataSet/R/"); crop(20, "DataSet/S/", "CropedDataSet/S/");
            scale(32, "CropedDataSet/A/", "ScaledDataSet/A/"); scale(41, "CropedDataSet/B/", "ScaledDataSet/B/"); scale(32, "CropedDataSet/E/", "ScaledDataSet/E/"); scale(15, "CropedDataSet/I/", "ScaledDataSet/I/"); scale(25, "CropedDataSet/O/", "ScaledDataSet/O/"); scale(17, "CropedDataSet/R/", "ScaledDataSet/R/"); scale(20, "CropedDataSet/S/", "ScaledDataSet/S/");
            learning(32, 'A'); learning(41, 'B'); learning(32, 'E'); learning(15, 'I'); learning(25, 'O'); learning(17, 'R'); learning(20, 'S');
            printf("Learning was Successfull!");
        }
        if (h == 2)
        {
            read_table(&x,&y,&z,&q);
            for (q = 0; q < x; q++)
            {
                for (j = 0; j < y; j++)
                {
                    printf("%c", g_table[q][j]);
                }
                printf("\n");
            }
            
        }
        if (h == 3)
        {
            printf("Do you enter the words manual? 1.Manual  2.Automatic :");
            scanf("%d", &u);
            if (u==1)
            {
                FILE* input1;
                input1 = fopen("Dictionary.txt","w");
                printf("Please inter number of words :");
                scanf("%d", &hg);
                fprintf(input1, "%d\n", hg);
                for (z = 0; z < hg; z++)
                {
                    printf("Please fill in our favorite words :");
                    scanf("%s",&strig[z]);
                    fprintf(input1, "%s\n",strig[z]);
                }
                fclose(input1);
                hg = find_word();
                for (z = 0; z < hg; z++)
                {
                    printf("#  %s  #    %d\n",strig[z],g_countword[z]);
                }
            }
            if (u == 2)
            {
                hg = find_word();
                for (z = 0; z <hg ; z++)
                {
                    printf("#  %s  #    %d\n", g_word[z], g_countword[z]);
                }
            }
        }
        if (h == 4)
        {
            printf("Javid Chaji");
        }
        if (h == 5)
        {
            exit(1);
        }
		
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

        fgets(p, sizeof(p), stdin);
        readBMP(p, &*width, &*height, g_asl);
        fgets(p, sizeof(p), stdin);
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

};

int main(int argc, char *argv[ ])
{
Ui_MainWindow ui;
QApplication a(argc, argv);
QMainWindow w;
ui.setupUi(&w);
w.show();
return a.exec();
}


namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DETECTORGJVTYL_H







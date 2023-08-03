#ifndef OCR_H
#define OCR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class OCR; }
QT_END_NAMESPACE

class OCR : public QWidget
{
    Q_OBJECT

public:
    OCR(QWidget *parent = nullptr);
    ~OCR();

private slots:
    void on_detect_letters_button_clicked();
    void on_add_word_to_dictionary_button_clicked();
    void crop(int numsampeles, char harf[100], char saveq[100]);
    void scale(int numsampeles, char harf[100], char saveq[100]);
    char detected_letters(char p[100]);
    void similarity(char harf, char *find, int *maxtatbigh);
    void read_table(int *radif, int *soton, int *width, int *height);
    int find_word();
    void learning(int numsampeles, char harf);
    int strstr1(char a[], char b[], int *y, int *g);


private:
    Ui::OCR *ui;
};
#endif // OCR_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QCheckBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
void Clavier_num();
void Checkbox();
void Checkbox1();

private:
     QLineEdit *zone_de_texte;
     QLineEdit *zone_de_texte1;
     QPushButton *b0 = new QPushButton("0");
     QPushButton *b1 = new QPushButton("1");
     QPushButton *b2 = new QPushButton("2");
     QPushButton *b3 = new QPushButton("3");
     QPushButton *b4 = new QPushButton("4");
     QPushButton *b5 = new QPushButton("5");
     QPushButton *b6 = new QPushButton("6");
     QPushButton *b7 = new QPushButton("7");
     QPushButton *b8 = new QPushButton("8");
     QPushButton *b9 = new QPushButton("9");
     QCheckBox *checkbox = new QCheckBox("Afficher Identifiant ",this);
     QCheckBox *checkbox1 = new QCheckBox("Afficher Mot de passe",this);

};
#endif // MAINWINDOW_H

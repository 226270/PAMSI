#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "pracownikmpk.h"
#include "mojatrasa.h"

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();
    void UstawSiec(Siec &MPK);
    void Wykonaj();
    void WczytajPrzystanki();

private slots:
    void on_findButton_clicked();


private:
    Ui::Window *ui;
    Siec siec;
};

#endif // WINDOW_H

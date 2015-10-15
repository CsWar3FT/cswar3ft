#include <QtGlobal>
#if QT_VERSION < 0x050000
#include <QtGui>
#else
#include <QtWidgets>
#endif

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QWidget *widget = new QWidget;
    QLineEdit *first_line = new QLineEdit();
    QLineEdit *second_line = new QLineEdit();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(first_line);
    layout->addWidget(second_line);

    QObject::connect(first_line,SIGNAL(textEdited(QString)),second_line,SLOT(setText(QString)));
    QObject::connect(second_line,SIGNAL(textEdited(QString)),first_line,SLOT(setText(QString)));

    widget->setLayout(layout);
    widget->setWindowFlags(Qt::Window);
    widget->show();

    return app.exec();
}

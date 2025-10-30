#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include <QtWidgets>

class CBuiltinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDlg(QWidget *parent = nullptr);
    ~CBuiltinDlg();
private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
    QPushButton* textcolorPushBtn;
private slots:
    void doPushBtn();
    void doTextColorBtn();
};
#endif // CBUILTINDLG_H

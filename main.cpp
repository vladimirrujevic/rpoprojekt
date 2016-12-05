//Authomatic includes
#include "glavnookno.h"
#include <QApplication>
#include <QMessageBox>
//Includes for start screen
#include "zacetnookno.h"
#include "ui_zacetnookno.h"
#include <QtMultimedia/QMediaPlaylist>
#include <QtMultimedia/QMediaPlayer>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  glavnookno w;
  w.setVisible(false);
  QDialog* d = new QDialog(0,0);
  Ui_ZacetnoOkno zUi;
  zUi.setupUi(d);
  //QString abc = zUi.btnZacni->objectName();
  //QString abc2 = zUi.btnNaGlavo->objectName();
  QMediaPlaylist *playlist = new QMediaPlaylist();
  playlist->addMedia(QUrl("qrc:/audio/audio/music.wav"));
  playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
  QMediaPlayer *music = new QMediaPlayer();
  //QMessageBox def;
  //def.setText(abc);
  music->setPlaylist(playlist);
  music->play();
  int s = d->exec(), st = 0;
  if(s == QDialog::Rejected){
     //def.exec();
    a.exit(0);
  } else if (s == QDialog::Accepted){
    w.show();
    w.start();
    st = a.exec();
    }

  return st;
}

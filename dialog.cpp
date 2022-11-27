#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene=new QGraphicsScene();
    ui->graphicsView->setScene(scene);

    QPen bluePen(Qt::blue);
    bluePen.setWidth(5);


    scene->addLine(50,350,750,350,bluePen);
    scene->addLine(50,350,50,25,bluePen);
    bluePen.setCapStyle(Qt::RoundCap);
    scene->addLine(35,50,50,25,bluePen);
    scene->addLine(65,50,50,25,bluePen);
    scene->addLine(720,335,755,350,bluePen);
    scene->addLine(720,365,755,350,bluePen);

    /*cycle = new QGraphicsTextItem("Ciklus");
    cycle->setPos(720,320);
    scene->addItem(cycle);
*/



    ui->spin_C5->setVisible(false);
    ui->spin_C6->setVisible(false);
    ui->spin_C7->setVisible(false);
    ui->spin_C8->setVisible(false);
    ui->spin_C9->setVisible(false);
    ui->spin_PP5->setVisible(false);
    ui->spin_PP6->setVisible(false);
    ui->spin_PP7->setVisible(false);
    ui->spin_PP8->setVisible(false);
    ui->spin_PP9->setVisible(false);

    ui->spin_P1->setEnabled(false);
    ui->spin_P2->setEnabled(false);
    ui->spin_P3->setEnabled(false);
    ui->spin_P4->setEnabled(false);
    ui->spin_P5->setEnabled(false);
    ui->spin_P6->setEnabled(false);
    ui->spin_P7->setEnabled(false);
    ui->spin_P8->setEnabled(false);
    ui->spin_P9->setEnabled(false);

    ui->lbl_P5->setVisible(false);
    ui->lbl_P6->setVisible(false);
    ui->lbl_P7->setVisible(false);
    ui->lbl_p8->setVisible(false);
    ui->lbl_p9->setVisible(false);

    ui->spin_P5->setVisible(false);
    ui->spin_P6->setVisible(false);
    ui->spin_P7->setVisible(false);
    ui->spin_P8->setVisible(false);
    ui->spin_P9->setVisible(false);





}
void Dialog::on_rBtn_SPret_clicked(bool checked)
{
    if(checked==true)
    {
        ui->spin_P1->setEnabled(true);
        ui->spin_P2->setEnabled(true);
        ui->spin_P3->setEnabled(true);
        ui->spin_P4->setEnabled(true);
        ui->spin_P5->setEnabled(true);
        ui->spin_P6->setEnabled(true);
        ui->spin_P7->setEnabled(true);
        ui->spin_P8->setEnabled(true);
        ui->spin_P9->setEnabled(true);
    }
    else
    {
        ui->spin_P1->setEnabled(false);
        ui->spin_P2->setEnabled(false);
        ui->spin_P3->setEnabled(false);
        ui->spin_P4->setEnabled(false);
        ui->spin_P5->setEnabled(false);
        ui->spin_P6->setEnabled(false);
        ui->spin_P7->setEnabled(false);
        ui->spin_P8->setEnabled(false);
        ui->spin_P9->setEnabled(false);
    }
}
void Dialog::on_cb_procesNumber_currentTextChanged(const QString &arg1)
{

    int counter;
    counter = ui->cb_procesNumber->currentText().toInt();
    if(counter==4){
       ui->spin_C1->setVisible(true);
       ui->spin_C2->setVisible(true);
       ui->spin_C3->setVisible(true);
       ui->spin_C4->setVisible(true);
       ui->spin_C5->setVisible(false);
       ui->spin_C6->setVisible(false);
       ui->spin_C7->setVisible(false);
       ui->spin_C8->setVisible(false);
       ui->spin_C9->setVisible(false);
       ui->spin_PP1->setVisible(true);
       ui->spin_PP2->setVisible(true);
       ui->spin_PP3->setVisible(true);
       ui->spin_PP4->setVisible(true);
       ui->spin_PP5->setVisible(false);
       ui->spin_PP6->setVisible(false);
       ui->spin_PP7->setVisible(false);
       ui->spin_PP8->setVisible(false);
       ui->spin_PP9->setVisible(false);
       ui->lbl_P1->setVisible(true);
       ui->lbl_P2->setVisible(true);
       ui->lbl_P3->setVisible(true);
       ui->lbl_P4->setVisible(true);
       ui->lbl_P5->setVisible(false);
       ui->lbl_P6->setVisible(false);
       ui->lbl_P7->setVisible(false);
       ui->lbl_p8->setVisible(false);
       ui->lbl_p9->setVisible(false);
       ui->spin_P1->setVisible(true);
       ui->spin_P2->setVisible(true);
       ui->spin_P3->setVisible(true);
       ui->spin_P4->setVisible(true);
       ui->spin_P5->setVisible(false);
       ui->spin_P6->setVisible(false);
       ui->spin_P7->setVisible(false);
       ui->spin_P8->setVisible(false);
       ui->spin_P9->setVisible(false);




}
    else if(counter==5){

        ui->spin_C1->setVisible(true);
        ui->spin_C2->setVisible(true);
        ui->spin_C3->setVisible(true);
        ui->spin_C4->setVisible(true);
        ui->spin_C5->setVisible(true);
        ui->spin_C6->setVisible(false);
        ui->spin_C7->setVisible(false);
        ui->spin_C8->setVisible(false);
        ui->spin_C9->setVisible(false);
        ui->spin_PP1->setVisible(true);
        ui->spin_PP2->setVisible(true);
        ui->spin_PP3->setVisible(true);
        ui->spin_PP4->setVisible(true);
        ui->spin_PP5->setVisible(true);
        ui->spin_PP6->setVisible(false);
        ui->spin_PP7->setVisible(false);
        ui->spin_PP8->setVisible(false);
        ui->spin_PP9->setVisible(false);
        ui->lbl_P1->setVisible(true);
        ui->lbl_P2->setVisible(true);
        ui->lbl_P3->setVisible(true);
        ui->lbl_P4->setVisible(true);
        ui->lbl_P5->setVisible(true);
        ui->lbl_P6->setVisible(false);
        ui->lbl_P7->setVisible(false);
        ui->lbl_p8->setVisible(false);
        ui->lbl_p9->setVisible(false);
        ui->spin_P1->setVisible(true);
        ui->spin_P2->setVisible(true);
        ui->spin_P3->setVisible(true);
        ui->spin_P4->setVisible(true);
        ui->spin_P5->setVisible(true);
        ui->spin_P6->setVisible(false);
        ui->spin_P7->setVisible(false);
        ui->spin_P8->setVisible(false);
        ui->spin_P9->setVisible(false);


       }
    else if(counter==6){
        ui->spin_C1->setVisible(true);
        ui->spin_C2->setVisible(true);
        ui->spin_C3->setVisible(true);
        ui->spin_C4->setVisible(true);
        ui->spin_C5->setVisible(true);
        ui->spin_C6->setVisible(true);
        ui->spin_C7->setVisible(false);
        ui->spin_C8->setVisible(false);
        ui->spin_C9->setVisible(false);
        ui->spin_PP1->setVisible(true);
        ui->spin_PP2->setVisible(true);
        ui->spin_PP3->setVisible(true);
        ui->spin_PP4->setVisible(true);
        ui->spin_PP5->setVisible(true);
        ui->spin_PP6->setVisible(true);
        ui->spin_PP7->setVisible(false);
        ui->spin_PP8->setVisible(false);
        ui->spin_PP9->setVisible(false);
        ui->lbl_P1->setVisible(true);
        ui->lbl_P2->setVisible(true);
        ui->lbl_P3->setVisible(true);
        ui->lbl_P4->setVisible(true);
        ui->lbl_P5->setVisible(true);
        ui->lbl_P6->setVisible(true);
        ui->lbl_P7->setVisible(false);
        ui->lbl_p8->setVisible(false);
        ui->lbl_p9->setVisible(false);
        ui->spin_P1->setVisible(true);
        ui->spin_P2->setVisible(true);
        ui->spin_P3->setVisible(true);
        ui->spin_P4->setVisible(true);
        ui->spin_P5->setVisible(true);
        ui->spin_P6->setVisible(true);
        ui->spin_P7->setVisible(false);
        ui->spin_P8->setVisible(false);
        ui->spin_P9->setVisible(false);


    }
     else if(counter == 7){
        ui->spin_C1->setVisible(true);
        ui->spin_C2->setVisible(true);
        ui->spin_C3->setVisible(true);
        ui->spin_C4->setVisible(true);
        ui->spin_C5->setVisible(true);
        ui->spin_C6->setVisible(true);
        ui->spin_C7->setVisible(true);
        ui->spin_C8->setVisible(false);
        ui->spin_C9->setVisible(false);
        ui->spin_PP1->setVisible(true);
        ui->spin_PP2->setVisible(true);
        ui->spin_PP3->setVisible(true);
        ui->spin_PP4->setVisible(true);
        ui->spin_PP5->setVisible(true);
        ui->spin_PP6->setVisible(true);
        ui->spin_PP7->setVisible(true);
        ui->spin_PP8->setVisible(false);
        ui->spin_PP9->setVisible(false);
        ui->lbl_P1->setVisible(true);
        ui->lbl_P2->setVisible(true);
        ui->lbl_P3->setVisible(true);
        ui->lbl_P4->setVisible(true);
        ui->lbl_P5->setVisible(true);
        ui->lbl_P6->setVisible(true);
        ui->lbl_P7->setVisible(true);
        ui->lbl_p8->setVisible(false);
        ui->lbl_p9->setVisible(false);
        ui->spin_P1->setVisible(true);
        ui->spin_P2->setVisible(true);
        ui->spin_P3->setVisible(true);
        ui->spin_P4->setVisible(true);
        ui->spin_P5->setVisible(true);
        ui->spin_P6->setVisible(true);
        ui->spin_P7->setVisible(true);
        ui->spin_P8->setVisible(false);
        ui->spin_P9->setVisible(false);


        }
    else if(counter == 8){
        ui->spin_C1->setVisible(true);
        ui->spin_C2->setVisible(true);
        ui->spin_C3->setVisible(true);
        ui->spin_C4->setVisible(true);
        ui->spin_C5->setVisible(true);
        ui->spin_C6->setVisible(true);
        ui->spin_C7->setVisible(true);
        ui->spin_C8->setVisible(true);
        ui->spin_C9->setVisible(false);
        ui->spin_PP1->setVisible(true);
        ui->spin_PP2->setVisible(true);
        ui->spin_PP3->setVisible(true);
        ui->spin_PP4->setVisible(true);
        ui->spin_PP5->setVisible(true);
        ui->spin_PP6->setVisible(true);
        ui->spin_PP7->setVisible(true);
        ui->spin_PP8->setVisible(true);
        ui->spin_PP9->setVisible(false);
        ui->lbl_P1->setVisible(true);
        ui->lbl_P2->setVisible(true);
        ui->lbl_P3->setVisible(true);
        ui->lbl_P4->setVisible(true);
        ui->lbl_P5->setVisible(true);
        ui->lbl_P6->setVisible(true);
        ui->lbl_P7->setVisible(true);
        ui->lbl_p8->setVisible(true);
        ui->lbl_p9->setVisible(false);
        ui->spin_P1->setVisible(true);
        ui->spin_P2->setVisible(true);
        ui->spin_P3->setVisible(true);
        ui->spin_P4->setVisible(true);
        ui->spin_P5->setVisible(true);
        ui->spin_P6->setVisible(true);
        ui->spin_P7->setVisible(true);
        ui->spin_P8->setVisible(true);
        ui->spin_P9->setVisible(false);


    }
    else if(counter == 9){
        ui->spin_C1->setVisible(true);
        ui->spin_C2->setVisible(true);
        ui->spin_C3->setVisible(true);
        ui->spin_C4->setVisible(true);
        ui->spin_C5->setVisible(true);
        ui->spin_C6->setVisible(true);
        ui->spin_C7->setVisible(true);
        ui->spin_C8->setVisible(true);
        ui->spin_C9->setVisible(true);
        ui->spin_PP1->setVisible(true);
        ui->spin_PP2->setVisible(true);
        ui->spin_PP3->setVisible(true);
        ui->spin_PP4->setVisible(true);
        ui->spin_PP5->setVisible(true);
        ui->spin_PP6->setVisible(true);
        ui->spin_PP7->setVisible(true);
        ui->spin_PP8->setVisible(true);
        ui->spin_PP9->setVisible(true);
        ui->lbl_P1->setVisible(true);
        ui->lbl_P2->setVisible(true);
        ui->lbl_P3->setVisible(true);
        ui->lbl_P4->setVisible(true);
        ui->lbl_P5->setVisible(true);
        ui->lbl_P6->setVisible(true);
        ui->lbl_P7->setVisible(true);
        ui->lbl_p8->setVisible(true);
        ui->lbl_p9->setVisible(true);
        ui->spin_P1->setVisible(true);
        ui->spin_P2->setVisible(true);
        ui->spin_P3->setVisible(true);
        ui->spin_P4->setVisible(true);
        ui->spin_P5->setVisible(true);
        ui->spin_P6->setVisible(true);
        ui->spin_P7->setVisible(true);
        ui->spin_P8->setVisible(true);
        ui->spin_P9->setVisible(true);


    }
}

void Dialog::on_btn_draw_pressed()
{

    int procesCounter;
    procesCounter = ui->cb_procesNumber->currentText().toInt();

    int height=200;
    int width=500;
    QList<int> Entry;
    QList<int> Duration;
    QBrush greenBrush(Qt::green);
    QPen blackPen(Qt::black);
    blackPen.setWidth(1);



    Entry.append(ui->spin_C1->text().toInt());
    Entry.append(ui->spin_C2->text().toInt());
    Entry.append(ui->spin_C3->text().toInt());
    Entry.append(ui->spin_C4->text().toInt());
    if(procesCounter==5){
    Entry.append(ui->spin_C5->text().toInt());}
     else if(procesCounter==6){
    Entry.append(ui->spin_C5->text().toInt());
    Entry.append(ui->spin_C6->text().toInt());}
    else if(procesCounter==7){
    Entry.append(ui->spin_C5->text().toInt());
    Entry.append(ui->spin_C6->text().toInt());
    Entry.append(ui->spin_C7->text().toInt());}
    else if(procesCounter==8){
    Entry.append(ui->spin_C5->text().toInt());
    Entry.append(ui->spin_C6->text().toInt());
    Entry.append(ui->spin_C7->text().toInt());
    Entry.append(ui->spin_C8->text().toInt());}
    else if(procesCounter==9){
    Entry.append(ui->spin_C5->text().toInt());
    Entry.append(ui->spin_C6->text().toInt());
    Entry.append(ui->spin_C7->text().toInt());
    Entry.append(ui->spin_C8->text().toInt());
    Entry.append(ui->spin_C9->text().toInt());}




    Duration.append(ui->spin_PP1->text().toInt());
    Duration.append(ui->spin_PP2->text().toInt());
    Duration.append(ui->spin_PP3->text().toInt());
    Duration.append(ui->spin_PP4->text().toInt());
    if(procesCounter==5){
    Duration.append(ui->spin_PP5->text().toInt());}
     else if(procesCounter==6){
    Duration.append(ui->spin_PP5->text().toInt());
    Duration.append(ui->spin_PP6->text().toInt());}
    else if(procesCounter==7){
    Duration.append(ui->spin_PP5->text().toInt());
    Duration.append(ui->spin_PP6->text().toInt());
    Duration.append(ui->spin_PP7->text().toInt());}
    else if(procesCounter==8){
    Duration.append(ui->spin_PP5->text().toInt());
    Duration.append(ui->spin_PP6->text().toInt());
    Duration.append(ui->spin_PP7->text().toInt());
    Duration.append(ui->spin_PP8->text().toInt());}
    else if(procesCounter==9){
    Duration.append(ui->spin_PP5->text().toInt());
    Duration.append(ui->spin_PP6->text().toInt());
    Duration.append(ui->spin_PP7->text().toInt());
    Duration.append(ui->spin_PP8->text().toInt());
    Duration.append(ui->spin_PP9->text().toInt());}

    float space;
    space = height/procesCounter;
    float sum=0;

    for(int i=0;i<procesCounter;i++){
        sum=sum+Duration.at(i);
    }


    QPen linePen(Qt::blue);
    int duration;
    float x,y;
    int min,minI;
    x=53;
    y=95;
    duration=width/sum;


    for(int i=0;i<procesCounter;i++){



              //Drawing rects
              min = *std::min_element(Entry.begin(), Entry.end());
              minI=Entry.indexOf(min);
              scene->addRect(x,y+space*(minI+1),duration*Duration.at(i),space,blackPen,greenBrush);
              //Drawing lines
              linePen.setStyle(Qt::DashLine);
              scene->addLine(x,space,x,350,linePen);
              //Duration (aka lengt of a proces)
              Entry.replace(minI,30);
              x=x+duration*Duration.at(i);
              //Add text
              QString textP("P%1");
              QString stringP=textP.arg(QString::number(i+1));
              cycle=scene->addText(stringP);
              cycle->setPos(20,y+space*(minI+1));
              //100+y+space*(minI+1)




    }

    /*



     */


   }




Dialog::~Dialog()
{
    delete ui;
}



